#ifndef __PATIENT__HPP__
#define __PATIENT__HPP__

#include <iostream>

class Patient {
    public:
        Patient();
        std::string getName();
        void setName(std::string _name);

        unsigned int getID();
        void setID(unsigned int _id);

        unsigned int getAge();
        void setAge(unsigned int _age);

        unsigned int getTriage();
        void setTriage(unsigned int _triage);
    protected:
        unsigned int id;
        std::string name;
        unsigned int age;
        unsigned int triage;
};

#endif