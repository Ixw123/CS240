//Program to display the prime factorials of a number the user chooses 
//by using a stack and Nyhoff's Stack Implementation using a static array
//Written by  Micah Church
//March 2014
//Language: C++ (g++ target)
#include <iostream>

using namespace std;

#include "Stack.h"
#include "Stack.cpp"

int main()
{
 Stack prime;
 int cnt; //Int to count the number of numbers in the stack used later to print astrixes in the display of the factorials
 int pnum; //Int to determine the number to divide x by
 pnum=2;
 cnt=0;
 cout<<"Input the number you would like to find the prime factorials of."<<endl;
 int x,n;
 cin>>n; //Used later to output the integer that the user first stated
 x=n; //Used to determine when to terminate the while loop
 while(x>=pnum)
 {
  if(x%pnum==0)
   {
    cout<<"Pushing "<<pnum<<" onto the stack"<<endl;
    prime.push(pnum);
    x=x/pnum;
    cnt++;
    pnum=1;
   }
  pnum=pnum+1;
 }
if(cnt!=1)
 {
  cout<<"The prime factorials of "<<n<<" are:";
  for(int i=0;i<cnt-1;i++)
  {
   cout<<prime.top()<<"*";
   prime.pop();
  }
  cout<<prime.top();
  cout<<endl;
}
else 
{
 cout<<"The number "<<n<<" is prime."<<endl;
}
return 0;
}
