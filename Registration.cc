#include "Registration.h"

int Registration::nextId = REG_ID;

Registration::Registration(Student * studentPtr, Course * coursePtr): student(studentPtr), course(coursePtr) {
    id = nextId++;

}

int Registration::getNextId() {
    return nextId;
}

Student * Registration::getStudent() {
    return student;
}

bool Registration::lessThan(Registration * reg) {
    if (course -> getTerm() < reg -> course -> getTerm()) {
        return true;
    } else if (course -> getTerm() == reg -> course -> getTerm()) {
        return course -> lessThan(reg -> course);
    } else {
        return false;
    }
}

void Registration::print() {

    cout << left << setw(7) << id;

    if (student != nullptr) {
        cout << left << setw(18) << student -> getStuName();
    } else {
        cout << left << setw(18) << "Unknown";
    }

    if (course != nullptr) {
        cout << course -> getTerm() << "  " << course -> getCourseCode() << endl;
    } else {
        cout << "Unknown" << endl;
    }

}