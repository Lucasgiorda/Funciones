#include<stdio.h>
#include<stdlib.h>

 int may(float a,float b){
	 printf("%f\n",(a+b)/2);
	 return 0;
	}
int main(int argc,char *argv[]){
	may(atoi(argv[1]),atoi(argv[2]));
	return 0;
}
