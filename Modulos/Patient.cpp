#include <iostream>
#include "Patient.hpp"


Patient::Patient(){
  this->name = " ";
  this->age = 0;
  this->triage = 5;
}
std::string Patient::getName(){return this->name; }
void Patient::setName(std::string _name){this->name = _name;}

unsigned int Patient::getID(){return this->id; }
void Patient::setID(unsigned int _id){this->id = _id;}

unsigned int Patient::getAge(){return this->age; }
void Patient::setAge(unsigned int _age){this->age = _age;}

unsigned int Patient::getTriage(){return this->triage;}
void Patient::setTriage(unsigned int _triage){this->triage = _triage; }
