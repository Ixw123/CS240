#include <iostream>

using namespace std;

bool find (int[],int);

int main ()
{
 int nums[11];
 int i,query;
 bool answer;
 cout<<"Input the values of the array."<<endl;
 for (i=0;i<11;i++)
  cin>>nums[i];
 cout<<"Input a number to search for."<<endl;
 cin>>query;
 answer=find(nums,query);
 if(answer)
  cout<<"The number "<<query<<" was found in the array."<<endl;
 else
  cout<<"The number "<<query<<" was not found."<<endl;
 return 0;
}

bool find (int nums[],int number)
{
 int i;
 i=0;
 bool found;
 found=false;
 while(i<11&&!found)
  {
   if(nums[i]==number)
    {
     found=true;
    }
   else 
    i++;
  }
 return found;
}
