#ifndef __DOCTOR__HPP__
#define __DOCTOR__HPP__

#include <iostream>
#include <queue>
#include "Patient.hpp"

class Doctor {
    public:
        Doctor();
        std::string getName();
        void setName(std::string _name);
        unsigned int getID();
        void setID(unsigned int _id);
        std::string getAvailable();
        void setAvailable(std::string _available);
        std::queue<Patient> getPatientQueue();
        void setPatientQueue(Patient _patient);

        void attentPatient(Patient _patient);
    protected:
        unsigned int id;
        std::string name;
        std::string available;
        std::queue<Patient> patientsQueue;
};

#endif