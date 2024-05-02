#ifndef COURSEARRAY_H
#define COURSEARRAY_H

#include "defs.h"
#include "Course.h"


/**
 * @class CourseArray
 * @brief Represents an array of Course objects that adds to the functionality.
 */
class CourseArray 
{
  public:
    CourseArray();
    ~CourseArray();
    void add(Course* c);
    bool find(int d, Course** c);
    void print(); //normal print
    void print(string term); //print based on academic term

  private:
    Course* elements[MAX_ARR];
    int   size;
};

#endif
