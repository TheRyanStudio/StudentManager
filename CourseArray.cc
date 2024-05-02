#include "CourseArray.h"

CourseArray::CourseArray() {
    size = 0;
}

CourseArray::~CourseArray() {
    for (int i = 0; i < size; ++i) {
        delete elements[i];
    }
}

void CourseArray::add(Course * c) {
    if (size >= MAX_ARR)
        return;

    int index = size;

    while (index > 0 && c -> lessThan(elements[index - 1])) {
        elements[index] = elements[index - 1];
        --index;
    }

    elements[index] = c;
    ++size;
}

bool CourseArray::find(int d, Course ** c) {
    for (int i = 0; i < size; i++) {
        if (elements[i] -> getCourseId() == d) {
            * c = elements[i];
            return true;
        }
    }

    * c = nullptr;
    return false;
}

void CourseArray::print() {

    for (int i = 0; i < size; ++i) {
        elements[i] -> print();
    }
}

void CourseArray::print(string term) {

    for (int i = 0; i < size; ++i) {
        if (elements[i] -> getTerm() == term)
            elements[i] -> print();
    }

}