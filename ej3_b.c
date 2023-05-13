#include<stdio.h>
#include<stdlib.h>

 int f(int x,int y) {
	return x - y;
}
 int main(int argc , char *argv[]){
	 int x = 3;
	 int y = 4;
	 f(x,y); 
	 printf("%d\n",f(x,y));
	return 0;
}
