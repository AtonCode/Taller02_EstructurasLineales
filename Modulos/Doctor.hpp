#include <iostream>
#include <queue>
class Doctor {
    public:
        Doctor();
        std::string getName();
        void setName(std::string nombre);
        std::unsigned int getID();
        void setID(std::unsigned int id);
        std::bool getAvailable();
        void setAvailable(std::bool available);
        std::queue<Patient> getPatientQueue();
        void setPatientQueue(Patient patient);
        attentPatient(Patient patient);
    protected:
        std::unsigned int id;
        std::string nombre;
        std::bool available;
        std::queue<Patient> patientsQueue;
    };