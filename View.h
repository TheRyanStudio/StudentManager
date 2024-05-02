#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;


/**
 * @class View
 * @brief Handles user interface-related functions, such as displaying menus and reading input.
 */
class View
{
  public:
    void showAdminMenu(int&);
    void showStudentMenu(string, int&);
    void printStr(string);
    void readInt(int&);
    void readStr(string&);
};

#endif
