#ifndef COURSE_H
#define COURSE_H

#include "defs.h"

/**
 * @class Course
 * @brief Represents a course with details such as term, subject, code, section, and instructor.
 */
class Course {
    public: Course(string term = "", string subject = "", int code = 0, char section = '\0', string instructor = "");
    bool lessThan(Course * course);
    void print();
    static int getNextId();
    int getCourseId();
    string getTerm();
    string getCourseCode();

    private: int id;
    string term;
    string subject;
    int code;
    char section;
    string instructor;
    static int nextId;

};

#endif