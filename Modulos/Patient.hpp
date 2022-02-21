#include <iostream>

class Patient {
    public:
        Patient();
        std::string getName();
        void setName(std::string nombre);
        std::unsigned int getID();
        void setID(std::unsigned int id);
        std::unsigned int getAge();
        void setAge(std::unsigned int age);
        std::unsigned int getTriage();
        void setTriage(std::unsigned int triage);
    protected:
        std::unsigned int id;
        std::string nombre;
        std::unsigned int age;
        std::unsigned int triage;
    };