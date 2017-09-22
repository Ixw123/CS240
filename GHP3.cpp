//Program to demonstate sting handling and file input in c++
//Written by Micah Church
//March 2014
//Language: C++  (g++ target)
#include <iostream>
#include <cassert>
#include <fstream>
#include <string>

using namespace std;

int main (void)
{
int i;
string s,filename;
ifstream fileIn;
char c,c2,c3,jc;
cout<<"Enter the name of the file to strip the comments from."<<endl;
cin>>filename;
fileIn.open(filename.data());
assert(fileIn.is_open());
i=0;
while(!(fileIn.eof()))
 {
 c=fileIn.get();
 if(c=='/')
  {
   c2=fileIn.peek();
   if(c2=='/'||'*')
    {
     jc=fileIn.get();
     while(jc!='\n')
     jc=fileIn.get();
     c=jc;
    }
  }
s.insert(i,1,c);
i++;
 }
cout<<s;
return 0;
}

