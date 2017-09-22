//Program to read and display two matrices and then make a third by
//finding the product of the previously stated matrices
//Demonstrates use of two dimensional arrays(matrices)
//Written by Micah Church
//February 2014
//Language: C++(g++ target)
#include <iostream>
using namespace std;
int main ()
{
int A[50][50],B[50][50],C[50][50];
int i,j,k,r,r2,c,c2;
cout<<"The rows and columns of any matrix cannot exceed 50."<<endl;
cout<<"Please input the number of rows for matrix A."<<endl;
cin>>r;
cout<<"Please input the number of columns for matrix A."<<endl;
cin>>c;
cout<<"Please input the number of rows for matrix B."<<endl;
cin>>r2;
cout<<"Please input the number of columns for matrix B."<<endl;
cin>>c2;
cout<<"Please input the integer values for the A matrix."<<endl;
for(i=0;i<r;i++)
 for(j=0;j<c;j++)
   {
    cout<<"Value ["<<i<<"]["<<j<<"] ";
    cin>>A[i][j];
    cout<<endl;
   }
i=0,j=0;
cout<<"The values in the A matrix are :"<<endl;
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    cout<<A[i][j]<<" ";
   }
  cout<<endl;
 }
cout<<"Please input the integer values for the B matrix."<<endl;
for(i=0;i<r2;i++)
 for(j=0;j<c2;j++)
  {
   cout<<"Value ["<<i<<"]["<<j<<"] ";
   cin>>B[i][j];
   cout<<endl;
  }
i=0,j=0;
cout<<"The values in the B matrix are:"<<endl;
for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
   {
    cout<<B[i][j]<<" ";
   }
  cout<<endl;
 }
cout<<"The C matrix is the product of the A and B matrices."<<endl;
if(c==r2)
//I did not come up with this use of for loops to find and fill the
//matrix C
//Adapted from C Program for Matrix Multiplication
//Figure 2
//Saurabh
//www.programminggeeks.com/c-program-for-matrix-multiplication/
{
 i=0,j=0;
 for(i=0;i<r;i++)
  for(j=0;j<c2;j++)
  {
   C[i][j]=0;
   for(k=0;k<r2;k++)
    C[i][j]+=A[i][k]*B[k][j];
  }
 i=0,j=0;
 cout<<"The values of matrix C are:"<<endl;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c2;j++)
  {
   cout<<C[i][j]<<" ";
  }
  cout<<endl;
 }
}
else
cout<<"The product of these matrices is undefinded."<<endl;
return 0;
}
