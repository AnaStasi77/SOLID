#pragma once

#include <string>

#include "IToString.h"

using namespace std;

class IName : public IToString {

};

class RussianName : public IName {
private:
    string _firstName;
    string _lastName;
    string _patronymic;

public:
    RussianName(const string &firstName, const string &lastName, const string &patronymic) : _firstName(firstName),
                                                                                             _lastName(lastName),
                                                                                             _patronymic(patronymic) {}

    const string &getFirstName() const {
        return _firstName;
    }

    const string &getLastName() const {
        return _lastName;
    }

    const string &getPatronymic() const {
        return _patronymic;
    }

    string toString() override {
        return _lastName + " " + _firstName + " " + _patronymic;
    }
};

class Name : public IName {
private:
    string _name;

public:
    Name(const string &name) : _name(name) {}

    const string &getName() const {
        return _name;
    }

private:
    string toString() override {
        return _name;
    }
};