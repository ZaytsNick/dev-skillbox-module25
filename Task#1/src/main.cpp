#include <iostream>
#include <string>
#include "tool_functions.h"



int main()
{
    std::string command;
    while (command!="suture")
    {
        std::cout << "Enter command: ";
        std::cin >> command;
        if (command == "scalpel")
            scalpel();
        else if (command == "hemostat")
            hemostat();
        else if (command == "tweezers")
            tweezers();
        else if (command == "suture")
            suture();
    }
}