#ifndef __URGENCY__HPP__
#define __URGENCY__HPP__
#include <iostream>
#include "Doctor.hpp"
#include "Patient.hpp"

class Urgency {
    public:
        Urgency();
        void addPatientToSpecialTriageQueue(Patient patient);
        void addDoctortoDoctorList(Doctor doctor);
        void addPatientToDoctorPatientQueue(Patient patient);
    private:
    
};

#endif