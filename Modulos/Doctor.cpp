#include <iostream>
#include "Doctor.hpp"
#include "Patient.hpp"
Doctor::Doctor(){
  
}

std::string Doctor::getName(){return this->name;}
void Doctor::setName(std::string _name){this->name = _name;}
unsigned int Doctor::getID(){return this->id;}
void Doctor::setID(unsigned int _id){this->id = _id;}
std::string Doctor::getAvailable(){return this->available;}
void Doctor::setAvailable(std::string _available){this->available = _available;}
std::queue<Patient> Doctor::getPatientQueue(){return this->patientsQueue;}
void Doctor::setPatientQueue(Patient _patient){this->patientsQueue.push(_patient);}