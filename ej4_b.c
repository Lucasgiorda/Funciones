#include<stdio.h>
#include<stdlib.h>

 int abs(int x) {
	return (x<0 ? -x:x);
}
 int main(int argc ,char* argv[]){
	 int x = atoi(argv[1]);
	 abs(x); 
	 printf("%d\n",abs(x));
	return 0;
}
