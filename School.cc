#include "School.h"

School::School(string name): name(name) {}

School::~School() {
    regList.cleanData();
}

void School::addStu(Student * stu) {
    stuArray.add(stu);
}

void School::addCourse(Course * course) {
    courseArray.add(course);
}

void School::addRegistration(Student * stu, Course * course) {
    Registration * newRegistration = new Registration(stu, course);
    regList.add(newRegistration);

}

bool School::findStudent(string num, Student ** stu) {
    return stuArray.find(num, stu);
}

bool School::findCourse(int id, Course ** course) {
    return courseArray.find(id, course);
}

void School::printStudents() {
    cout << name << endl;
    stuArray.print();
}

void School::printCourses() {
    cout << name << endl;
    courseArray.print();
}
void School::printCoursesbyTerm(string term) {
    cout << name << "  " << term << endl;
    courseArray.print(term);
}

void School::printRegistrations() {
    cout << name << endl;
    regList.print();
}

void School::printRegistrationsByStu(Student * stu) {
    RegList regListLocal(regList, stu);

    cout << name << endl;
    cout << "  Student: " << stu -> getStuName() << endl;
    regListLocal.print();
}