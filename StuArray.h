#ifndef STUARRAY_H
#define STUARRAY_H

#include "defs.h"
#include "Student.h"


/**
 * @class StuArray
 * @brief Represents an array of students.
 */
class StuArray 
{
  public:
    StuArray();
    ~StuArray();
    void add(Student* s);
    bool find(string num, Student** stu);
    void print();

  private:
    Student* elements[MAX_ARR];
    int   size;
};

#endif
