#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


char* divsor(int a,int b){
	return(a % b ==0) ? "si es divisor" :"no es divisor";
}
int main (void){
 printf("%s\n",divsor(2,6));
 return 0;
 }
