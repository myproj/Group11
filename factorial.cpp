#include "functions.h"
#include<cstdio>
int factorial(int n){
if(n<0){


cout<<"Enter a positive number :";
return -1;
}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
