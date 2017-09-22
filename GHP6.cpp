//Program to read in and sort 15 prices and print out the range and 
//changes from day to day
//Demonstrates use of vector STL container class
//Written by Micah Church
//April 2014
//Language: C++(g++ target)
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
int i;
double price;
vector <double> stock_prices;
vector <double> ordered_stock_prices;

cout<<"Please input the stock prices for each day."<<endl;
for(i=0;i<15;i++)
 {
  cin>>price;
  stock_prices.push_back(price);
  ordered_stock_prices.push_back(price);
 }

sort(ordered_stock_prices.begin(),ordered_stock_prices.end());
cout<<"The stock prices from day to day are:"<<endl;
for(i=0;i<15;i++)
  cout<<"Day "<<i+1<<":"<<stock_prices[i]<<endl;
cout<<"The Price range goes from:"<<ordered_stock_prices[0]<<" to "<<ordered_stock_prices[14]<<endl;

return 0;
}
