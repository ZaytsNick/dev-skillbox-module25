#include <iostream>
#include <string>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

int main()
{
    std::string command;
    while (command!="exit")
    {
        std::cout<<"Enter command: ";
        std::cin>>command;
        if (command=="sum") {
            compute(integer);
        }
        else if(command=="save") {
            save(integer);
        }
        else if(command=="load") {
            load(integer);
        }
        else if(command=="print") {
            print(integer);
        }
        else if(command=="write") {
            write(integer);
        }
    }
}
