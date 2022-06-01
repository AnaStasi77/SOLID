#pragma once

#include <fstream>
#include <string>

#include "Person.h"

using namespace std;

bool writeToFile(Person* person, string path) {
    ofstream file;
    file.open(path);

    if (file.is_open()) {
        file << person->toString();
        file.close();
        return true;
    } else {
        file.close();
        return false;
    }
}