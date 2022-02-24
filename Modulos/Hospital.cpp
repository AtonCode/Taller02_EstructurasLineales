#include "Hospital.hpp"
#include "Doctor.hpp"
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Hospital::Hospital(){
  
  this->id = 1121;
  this->name = "San Ignacio";

}

std::string Hospital::getName(){return this->name;}
void Hospital::setName(std::string _name){ this->name = _name;}

unsigned int Hospital::getID(){return this->id;}
void Hospital::setID(unsigned int _id){this->id = _id;}


void Hospital::importDoctors(std::string _path){
  //con esta funcion pueden leer registros TSV de 3 columnas
    const std::string dir = _path;
    //list<Doctor> _listDoctors;
    std::string campo1,campo2,campo3;
      std::ifstream myfile (_path.c_str());
      if (myfile.is_open()) {
        myfile >> campo1>>campo2>>campo3;//lectura de encabezado
        while (true)
        {    
            myfile >> campo1>>campo2>>campo3;//lectura de los datos
            
            Doctor doctorTemporal;
            doctorTemporal.setID(std::stoi(campo1));
            doctorTemporal.setName(campo2);
            doctorTemporal.setAvailable(campo3);
            
            this->listDoctors.push_back(doctorTemporal);
            if(myfile.eof())
              break;
        }
        myfile.close();
    }
      else std::cout << "Unable to open file: "+_path;
       
}

