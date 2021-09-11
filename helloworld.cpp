#include<iostream>
#include"swap.h"
int main(int argc,char **argv)
{
    int val1 =10;
    int val2 =20;
    std::cout << "before swap:" << std::endl;
    std::cout << "val1 =" << val1 <<std:: endl;
    std::cout << "val2=" << val2 <<std:: endl;
    swap(val1,val2);
    std::cout << "after swap:" << std::endl;
    return 0;
}