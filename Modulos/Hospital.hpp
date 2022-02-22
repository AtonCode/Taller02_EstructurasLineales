#include <iostream>
#include "Patient.hpp"
#include "Doctor.hpp"
#include "Urgency.hpp"
#include "vector"

class Hospital {
    public:
        Hospital();
        std::string getName();
        void setName(std::string nombre);

        std::unsigned int getID();
        void setID(std::unsigned int id);

        importPatients(std::string path);
        importDoctors(std::string path);
    protected:
        std::unsigned int id;
        std::string nombre;
        Urgency urgency;
        std::vector <Patient> vectorPatients;
        std::vector <Doctor> vectorDoctors;
};

