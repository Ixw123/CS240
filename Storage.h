//This program contains all the fucntion prototypes and private 
//data members for the implementation file.
//May 2014
//Written by: Micah Church
//Language: C++ (g++ target)
/*---Storage.h---------------------------------------------------

 This header defines the data type hash for processing strings.
 Basic operations are:
 Default constructer --Fills a 23 element vector with the strings
   "****"
 store: To store a string
 search: To search for a string
 print: To display the stored strings
---------------------------------------------------------------*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;

#ifndef STORAGE      //If Storage is not defined define Storage
#define STORAGE

class Storage
{
 public:
 /*************************Function Members**********************/
 /*********************Class constructers************************/
  Storage();
 /*---------------------------------------------------------------
    Construct a vector with 23 strings ("****").
    
    Precondition: None.
    Postcondition: A vector is made with 23 strings containing 
     the string "****"

 ---------------------------------------------------------------*/    
 void store();                                                   
 /*---------------------------------------------------------------
 
     Stores 15 strings words if there is a collision then        
      the string is stored in the next acsending one avalible.   
                                                                 
     Precondition: words is filled with 23 empty strings.        
     Postcondition: 15 values are stored in the vector words.    
 ---------------------------------------------------------------*/

 /*---------------------------------------------------------------
 void search();
 /*---------------------------------------------------------------
    Search the vector for any number of  string input from the  
     keyboard.                                                  
                                                                 
    Precondition: words is filled with 15 strings the user has   
     defined, and 7 empty strings.                               
    Postcondition: Finds weather or not strings are stored, in   
     outputs the result to the user.                             
 ---------------------------------------------------------------*/
 void print();
 /*---------------------------------------------------------------
    Display the contents of the vector words.

    Precondition: words is filled with 15 strings the user has 
     defined, and 7 empty strings.
    Postcondition: All of the contents of words are display as 
     well as what an empty position is displayed as.
 ---------------------------------------------------------------*/
 
 private:
 /**********************Data Members*****************************/
 vector <string> words;

}; //end of class delcaration
#endif
