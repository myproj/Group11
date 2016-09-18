//Calculating sum of digits of a number
#include<stdio.h>
 
int main()
{
   int n, sum = 0, remainder;
   int flag=1;
   printf("Enter an integer\n");
   scanf("%d",&n);
   if(n<0){
   n*=-1;
   flag = 0;
   }
   while(n != 0)
   {
      if(n<10 && !flag)
      n*=-1;
      remainder = n % 10;
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10; 
	  printf("The n is %d\n", flag?n:n*-1);
   }
 //Displaying the sum
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
