#include <iostream>
#include <fstream>

#include "Person.h"
#include "ToFile.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    Person* person = new Person(new RussianName("Andrey", "Starinin", "Nikolaevich"), new Address("394029", "Russia", "Voronezhskaya", "", "Voronezh", "Leninskiy pr-t", "20/3"));
    writeToFile(person, "person.dat");

    Student* student = new Student(new RussianName("Andrey", "Starinin", "Nikolaevich"), new Address("394029", "Russia", "Voronezhskaya", "", "Voronezh", "Leninskiy pr-t", "20/3"), "IT");
    writeToFile(student, "student.dat");

    Teacher* teacher = new Teacher(new Name("Andrey"), new Address("394029", "Russia", "Voronezhskaya", "", "Voronezh", "Leninskiy pr-t", "20/3"), "IT");
    writeToFile(teacher, "teacher.dat");

    return 0;
}
