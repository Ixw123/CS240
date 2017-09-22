//This program runs all the funtions that are used in the 
//driver file.
//May 2014
//Written by: Micah Church
//Language: C++ (g++ target)
/*--Storage.cpp---------------------------------------------
       This file implements Storage member functions.
----------------------------------------------------------*/
#include <iostream>
#include <string>

#include "Storage.h"

using namespace std;
//--- Definition of Storage constructer
Storage::Storage()
{
 int i;//counter for the loop


 for(i=0;i<23;i++)
   words.push_back("****");
}
//--- Definition of store()
void Storage::store()
{
 char l,f;//used to get the first and last chars of a string
 int i,pos,first,last;//i-counter,pos-index for vector,
 //first-ascii for first char,last-ascii for last char
 string word_to_store,word_in_vector;


 cout<<"Input words to store in the vector."<<endl;
 for(i=0;i<15;i++)
  {
   cin>>word_to_store;
   f=word_to_store[0];
   l=word_to_store[word_to_store.size()-1];
   first=static_cast<int>(f);
   last=static_cast<int>(l);
   pos=(first+last)%23;
   word_in_vector=words[pos];
   while(word_in_vector!="****")
    {
     if(pos==22) 
       pos=0;
     else
     {
      pos=pos+1;
      word_in_vector=words[pos];
     }
    }
   words[pos]=word_to_store;
  } 
}
//--- Definition of search()
void Storage::search()
{
 bool ans;//used to determine in the word is stored or not
 string search;//The value that is searched for
 int pos,first,last;
 char answer,l,f;//answer is used to terminate the while loop
 answer='Y';
 ans=false;


 while(answer=='Y'||answer=='y')
  {
   cout<<"Input a word to see if it is stored in the vector."<<endl;
   cin>>search;
   f=search[0];
   l=search[search.size()-1];
   first=static_cast<int>(f);
   last=static_cast<int>(l);
   pos=(first+last)%23;
   while((words[pos]!="****")&&!ans)
   {
    if(pos==22&&words[pos]!=search)
     pos=0;
    else if(words[pos]==search)
     ans=true;
    else
     pos++;
   }
   if(ans)
   {
    cout<<"The word "<<search<<" is in the vector at position "<<pos<<"."<<endl;
    ans=false;
   }
   else
    cout<<"The word "<<search<<" is not in the vector."<<endl;
   cout<<endl<<endl<<endl<<endl;
   cout<<"Would you like to search for another word(Y/N)?"<<endl;
   cin>>answer;
   cout<<endl<<endl<<endl<<endl;
  }
}
//--- Definition of print()
void Storage::print()
{
 int i;//counter for the for loop
 

 cout<<endl<<endl<<endl<<endl;
 cout<<"Places that are empty are shown as ****"<<endl;
 cout<<"The words stored are:"<<endl;
 for(i=0;i<23;i++)
  cout<<"Word stored in position:"<<i<<" "<<words[i]<<endl;
  cout<<endl<<endl<<endl<<endl;
}
