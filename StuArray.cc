#include "StuArray.h"

StuArray::StuArray() {
    size = 0;
}

StuArray::~StuArray() {
    for (int i = 0; i < size; ++i) {
        delete elements[i];
    }
}

void StuArray::add(Student * s) {
    if (size >= MAX_ARR)
        return;

    int index = size;

    while (index > 0 && s -> lessThan(elements[index - 1])) {
        elements[index] = elements[index - 1];
        --index;
    }

    elements[index] = s;
    ++size;
}

bool StuArray::find(string num, Student ** stu) {
    for (int i = 0; i < size; i++) {
        if (elements[i] -> getStuNumber() == num) {
            * stu = elements[i];
            return true;
        }
    }

    * stu = nullptr;
    return false;
}

void StuArray::print() {
    for (int i = 0; i < size; ++i) {
        elements[i] -> print();
    }
}