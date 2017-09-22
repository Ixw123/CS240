//This program uses the Storage.cpp file and the Storage.h file to fill 
//a vector and store values then search for values and then display the 
//vector 
//May 2014
//Written by: Micah Church
//Language: C++ (g++ target)
#include <iostream>

#include "Storage.h"

using namespace std;

int main()
{
Storage list;
list.store();
list.print();
list.search();
return 0;
}
