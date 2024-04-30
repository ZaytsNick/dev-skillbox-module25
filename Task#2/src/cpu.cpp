#include <iostream>
//cpu
void compute(int integer[8])
{
    int sum(0);
    for(int i=0;i<8;i++) {
        sum+=integer[i];
    }
    std::cout<<sum<<std::endl;
}