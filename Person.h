#pragma once

#include <string>

#include "IName.h"
#include "IAddress.h"
#include "IToString.h"

using namespace std;

class Person : public IToString {
protected:
    IName* _name;
    IAddress* _address;
public:
    Person(IName* name, IAddress* address) : _name(name), _address(address) {}
    Person(Person const &person) : _name(person.getName()), _address(person.getAddress()) {}

    IAddress *getAddress() const {
        return _address;
    }

    void setAddress(IAddress *address) {
        _address = address;
    }

    IName *getName() const {
        return _name;
    }

    virtual string toString() override {
        return _name->toString() + "\n" + _address->toString();
    }
};

