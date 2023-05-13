#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float d(float x,float y){
	return sqrt((x*x-0)+(y*y-0));
}
int main(void){
	printf("%f\n",d(3.0,4.0));
	return 0;
}
