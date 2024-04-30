#include <iostream>
#include <fstream>
//disk
void save(int integer[8])
{
    std::ofstream save_integer;
    save_integer.open("C:\\Users\\Zayts\\Desktop\\Dev\\dev-skillbox-module25\\Task#2\\disk\\save.txt");
    if(save_integer.is_open()) {
        for(int i=0;i<8;i++) {
            save_integer<<integer[i]<<std::endl;
        }
        save_integer.close();
    }
    }
void load(int integer[8])
    {
std::ifstream load_integer;
load_integer.open("C:\\Users\\Zayts\\Desktop\\Dev\\dev-skillbox-module25\\Task#2\\disk\\save.txt");
if(load_integer.is_open()) {
    for(int i=0;i<8;i++) {
        load_integer>>integer[i];
    }
    load_integer.close();
}
    else
        std::cout<<"ERROR: file not found"<<std::endl;
}
