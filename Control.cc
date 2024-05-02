#include <iostream>

using namespace std;
#include <string>

#include "Control.h"

Control::Control(): school(new School("")) {}

Control::~Control() {
    delete school;
}

void Control::launch() {
    int currChoice;
    int studentChoice;
    string studentNum;
    string academicTerm;
    initStudents(school);
    initCourses(school);

    while (1) {

        view.showAdminMenu(currChoice);

        switch (currChoice) {
        case 1:
            cout << "STUDENTS of Carleton U. School of Computer Science" << endl;
            school -> printStudents();
            break;
        case 2:
            cout << "COURSES OF Carleton U. School of Computer Science" << endl;
            school -> printCourses();
            break;
        case 3:
            cout << "REGISTRATIONS OF Carleton U. School of Computer Science" << endl;
            school -> printRegistrations();
            break;
        case 4:
            do {
                cout << "Enter a student number: ";
                view.readStr(studentNum);

                Student * selectedStudent;
                if (school -> findStudent(studentNum, & selectedStudent)) {
                    while (1) {
                        view.showStudentMenu(selectedStudent -> getStuName(), studentChoice);

                        switch (studentChoice) {
                        case 1:
                            cout << "Enter an academic term: ";
                            view.readStr(academicTerm);
                            school -> printCoursesbyTerm(academicTerm);
                            break;
                        case 2:
                            school -> printRegistrationsByStu(selectedStudent);
                            break;
                        case 3:
                            int courseId;
                            cout << "Enter a course ID: ";
                            view.readInt(courseId);

                            Course * selectedCourse;
                            if (school -> findCourse(courseId, & selectedCourse)) {
                                school -> addRegistration(selectedStudent, selectedCourse);
                                cout << "Registration added successfully." << endl;
                            } else {
                                cout << "Error: Could not find Course." << endl;
                            }
                            break;
                        case 0:
                            cout << "Returning to the student menu." << endl;
                            break;
                        default:
                            cout << "Error: Invalid choice. " << endl;
                        }
                    }
                    while (studentChoice != 0);
                } else {
                    cout << "Error: Student not found. " << endl;
                }
            } while (1);
            break;
        case 0:
            cout << "Exiting the program." << endl;
            break;
            return;
        default:
            cout << "Error: Invalid choice. " << endl;
        }
    }
}

void Control::initStudents(School * sch) {
    sch -> addStu(new Student("100567888", "Matilda", "CS"));
    sch -> addStu(new Student("100333444", "Harold", "Geography"));
    sch -> addStu(new Student("100444555", "Joe", "Physics"));
    sch -> addStu(new Student("100775588", "Timmy", "CS"));
    sch -> addStu(new Student("100111222", "Amy", "Math"));
    sch -> addStu(new Student("100222333", "Stanley", "Art History"));
}

void Control::initCourses(School * sch) {
    sch -> addCourse(new Course("F23", "COMP", 2401, 'A', "Laurendeau"));
    sch -> addCourse(new Course("F23", "COMP", 2401, 'B', "Hillen"));
    sch -> addCourse(new Course("F23", "COMP", 2401, 'C', "Laurendeau"));
    sch -> addCourse(new Course("F23", "COMP", 2401, 'D', "Hillen"));
    sch -> addCourse(new Course("F23", "COMP", 2402, 'A', "Shaikhet"));
    sch -> addCourse(new Course("F23", "COMP", 2402, 'B', "Shaikhet"));
    sch -> addCourse(new Course("F23", "COMP", 2404, 'A', "Hill"));
    sch -> addCourse(new Course("F23", "COMP", 2404, 'B', "Hill"));
    sch -> addCourse(new Course("F23", "COMP", 2406, 'A', "Nel"));
    sch -> addCourse(new Course("F23", "COMP", 2406, 'B', "Shaikhet"));
    sch -> addCourse(new Course("F23", "COMP", 2804, 'A', "Morin"));
    sch -> addCourse(new Course("F23", "COMP", 2804, 'B', "Hill"));

    sch -> addCourse(new Course("W24", "COMP", 2401, 'A', "CI"));
    sch -> addCourse(new Course("W24", "COMP", 2401, 'B', "Lanthier"));
    sch -> addCourse(new Course("W24", "COMP", 2402, 'A', "Sharp"));
    sch -> addCourse(new Course("W24", "COMP", 2402, 'B', "Sharp"));
    sch -> addCourse(new Course("W24", "COMP", 2404, 'A', "Hill"));
    sch -> addCourse(new Course("W24", "COMP", 2404, 'B', "Laurendeau"));
    sch -> addCourse(new Course("W24", "COMP", 2404, 'C', "Laurendeau"));
    sch -> addCourse(new Course("W24", "COMP", 2406, 'A', "Nel"));
    sch -> addCourse(new Course("W24", "COMP", 2406, 'B', "Nel"));
    sch -> addCourse(new Course("W24", "COMP", 2804, 'A', "Hill"));
    sch -> addCourse(new Course("W24", "COMP", 2804, 'B', "Hill"));
}