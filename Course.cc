#include "Course.h"

int Course::nextId = COURSE_ID;

Course::Course(string term, string subject, int code, char section, string instructor): term(term), subject(subject), code(code), section(section), instructor(instructor) {
    id = nextId++;
}

int Course::getNextId() {
    return nextId;
}

bool Course::lessThan(Course * course) {
    return id < course -> id;
}

int Course::getCourseId() {
    return id;
}

string Course::getTerm() {
    return term;
}

string Course::getCourseCode() {
    return subject + " " + to_string(code) + "-" + section;
}

void Course::print() {
    cout << left << setw(6) << id << "Term: " << term << "   " << subject << " " << code << " " << section << "    " << "Instr: " << instructor << endl;
}