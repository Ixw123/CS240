//This program reads in words from the user and checks to see if these 
//words are palindromes or not
//April 2014
//Written by: Micah Church
//Language: C++ (g++ target)
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main ()
{
string w;        //The string the user inputs 
int i,           //used as a counter in a loop
    ans;         //used to terminate the sentinel do while loop
char ch,ch2;     //Characters used to test the word
bool palindrome; //A boolean value used to print if the word is a palindrome
int answer;      //The static value ued to terminate the while loop
answer=-999;     //The value that when inputted terminates the while
palindrome=1;    //Initialized for use in the time saving while that 
                 //evauluates the string
queue <char>q;   //Initializes a queue of chars called q
stack <char>s;   //Initializes a stack of chars called s
do
 {
  cout<<"Please input a word to check to see if it is a palindrome"<<endl;
  cin>>w;
  for(i=0;i<w.size();i++)
   {   
    s.push(w[i]);     //Putting a value onto the stack of chars
    q.push(w[i]);     //Putting a value onto the queue of chars
   }
  while(!s.empty()&&palindrome)
   {
    ch=s.top();       //The char on the top of the stack
    ch2=q.front();    //The char at the front of the queue
    if(ch==ch2)
     {
      s.pop();        //Deletes the first char on the stack 
      q.pop();        //Deletes the char at the front of the queue
     }
    else
     palindrome=0;
   }
  if(palindrome)
   cout<<"The word "<<w<<" is a palindrome."<<endl;
  else
   cout<<"The word "<<w<<" is not a palindrome."<<endl;
  cout<<"Would you like to try another word? If not then input a -999."<<endl;
  cin>>ans;
  palindrome=1;
  //Clears out the stack and queue for the next word to be able to be 
  //evaluated
  while(!q.empty())
   { 
    q.pop();
    s.pop();
   }
 }   
while(ans!=answer);

return 0;
}
