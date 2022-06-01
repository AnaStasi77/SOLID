#pragma once

#include <string>

#include "Person.h"

using namespace std;

class Teacher : public Person {
private:
    string _faculty;
public:
    Teacher(IName *name, IAddress *address, const string &faculty) : Person(name, address), _faculty(faculty) {}

    const string &getFaculty() const {
        return _faculty;
    }

    void setFaculty(const string &faculty) {
        _faculty = faculty;
    }

    string toString() override {
        return _faculty + "\n" + _name->toString() + "\n" + _address->toString();
    }
};