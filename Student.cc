#include "Student.h"

Student::Student(string number, string name, string majorPgm): number(number), name(name), majorPgm(majorPgm) {}

bool Student::lessThan(Student * stu) {
    return name < stu -> name;
}

string Student::getStuName() {
    return name;
}

string Student::getStuNumber() {
    return number;
}

void Student::print() {
    cout << number << "  " << left << setw(20) << name << majorPgm << endl;
}