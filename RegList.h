#ifndef RegList_H
#define RegList_H

#include "defs.h"
#include "Registration.h"

/**
 * @class RegList
 * @brief Represents a linked list of Registration objects.
 */
class RegList
{

  class Node
  {
    public:
      Registration* data;
      Node* next;
      
  };

public:
    RegList();
    ~RegList();
    RegList(RegList& otherList, Student* stu);
    void add(Registration* r);
    void cleanData();
    void print();
    
private:
    Node* head;
    Node* tail;

};

#endif