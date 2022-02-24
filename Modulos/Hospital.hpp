#ifndef __HOSPITAL__HPP__
#define __HOSPITAL__HPP__
#include <iostream>
#include "Patient.hpp"
#include "Doctor.hpp"
#include "Urgency.hpp"
#include <list>
#include <string>


class Hospital {
    
    public:
        Hospital();
        std::string getName();
        void setName(std::string _name);

        unsigned int getID();
        void setID(unsigned int _id);

        std::list<Doctor>  getListDoctors();
        void setDoctorToListDoctors(Doctor _doctor);

        std::list<Patient> getListPatient();
        void setPatientToListPatient(Patient _patient);

        void importPatients(std::string _path);
        void importDoctors(std::string _path);

    protected:
        unsigned int id;
        std::string name;
        std::list <Patient> listPatients;
        std::list <Doctor> listDoctors;
};

#endif