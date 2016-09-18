//This program calculates the sum of digits of a number

#include<cstdio>
#include<iostream>
using namespace std;
 
int main()
{
   int n, sum = 0, remainder;
 
   cout<<"Enter an integer\n";
   cin>>n;
    
   while(n!= 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<"\n";
      sum = sum + remainder;
	  cout<<"The Sum is "<<sum<<"\n";
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";
   }
 
   cout<<"Sum of digits of entered number = "<<sum<<"\n";
 
   return 0;
}
