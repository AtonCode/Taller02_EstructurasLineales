#include "Hospital.hpp"
#include <fstream>
#include <stdio.h>
#include <stdlib.h>


Hospital::Hospital(){
  
  this->id = 1121;
  this->name = "San Ignacio";

}

std::string Hospital::getName(){return this->name;}
void Hospital::setName(std::string _name){ this->name = _name;}

unsigned int Hospital::getID(){return this->id;}
void Hospital::setID(std::unsigned int _id){this->id = _id;}

std::list<Doctor> Hospital::getListDoctors(return this->ListDoctors;);
void Hospital::setDoctorToListDoctors(Doctor _doctor){ListDoctors.push_back(_doctor);}

std::list<Patient>  Hospital::getListPatient(return this->ListPatient;);
void Hospital::setPatientToListPatient(Patient _patient){ListPatient.push_back_(_patient);}




void Hospital::importDoctors(std::string _path){
  //con esta funcion pueden leer registros TSV de 3 columnas
    const std::string dir = _path;
    //list<Doctor> _listDoctors;
    std::string campo1,campo2,campo3;
      ifstream myfile (_path.c_str());
      if (myfile.is_open()) {
        myfile >> campo1>>campo2>>campo3;//lectura de encabezado
        while (true)
        {    
            myfile >> campo1>>campo2>>campo3;//lectura de los datos
            Doctor::Doctor();
            Doctor doctorTemporal;
            doctorTemporal.setID(atoi(campo1));
            doctorTemporal.setName(campo2);
            doctorTemporal.setAvailable(campo3);
            
            this->setDoctorToListDoctors(doctorTemporal);
            if(myfile.eof())
              break;
        }
        myfile.close();
    }
      else cout << "Unable to open file: "+_path;
       
}

