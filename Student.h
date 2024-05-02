#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"


/**
 * @class Student
 * @brief Represents a student with details such as student number, name, and major program.
 */
class Student 
{
    public:
    Student(string number = 0, string name = "", string majorPgm = "");
    bool lessThan(Student* stu);
    void print();
    string getStuNumber();
    string getStuName();


    private:
    string number, name, majorPgm;

};

#endif // STUDENT
