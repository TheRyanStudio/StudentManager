#ifndef CONTROL_H
#define CONTROL_H

#include "School.h"

#include "View.h"

#include "defs.h"


/**
 * @class Control
 * @brief Responsible for controlling the overall program, including initializing
 *        data, handling user input.
 */
class Control {
    public: void launch();
    Control();
    ~Control();

    private: void initStudents(School * school);
    void initCourses(School * school);
    School * school;
    View view;
};

#endif