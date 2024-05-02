#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "defs.h"
#include "Course.h"
#include "Student.h"

/**
 * @class Registration
 * @brief Represents a registration of a student in a course.
 */
class Registration
{
public:
    Registration(Student* studentPtr = nullptr, Course* coursePtr = nullptr);
    bool lessThan(Registration* reg);
    void print();
    static int getNextId();
    Student* getStudent();
    

private:
   static int nextId;
   int id; 
   Student* student; 
   Course* course;
};

#endif

