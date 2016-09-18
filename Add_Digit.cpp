//This program calculates the sum of digits of a number

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
   int n, sum = 0, remainder;
   cout<<"Enter an integer\n";
   cin>>n;
   int flag=1;
   if(n<0){
   n*=-1;
   flag = 0;
   }
   while(n != 0)
   {
      if(n<10 && !flag)
      n*=-1;
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<"\n";
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10; 
	  printf("The n is %d\n", flag?n:n*-1);
   }
 //Displaying the sum
   printf("Sum of digits of entered number = %d\n",sum);
   return 0;
}
