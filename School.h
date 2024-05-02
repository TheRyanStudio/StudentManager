#ifndef SCHOOL_H
#define SCHOOL_H

#include "defs.h"
#include "Course.h"
#include "Student.h"
#include "StuArray.h"
#include "CourseArray.h"
#include "RegList.h"

/**
 * @class School
 * @brief Represents a school with students, courses, and registrations.
 */
class School
{
public:
    School(string name = "");
    ~School();
    void addStu(Student* stu);
    void addCourse(Course* course);
    void addRegistration(Student* stu, Course* course);
    bool findStudent(string num, Student** stu);
    bool findCourse(int id, Course** course);
    void printStudents();
    void printCourses();
    void printCoursesbyTerm(string term);
    void printRegistrations();
    void printRegistrationsByStu(Student* stu);
private:
    string name;
    StuArray stuArray;  
    CourseArray courseArray;  
    RegList regList;  
};


#endif

