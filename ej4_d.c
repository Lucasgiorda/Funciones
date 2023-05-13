#include<stdio.h>
#include<stdlib.h>

 int may(int a,int b){
	 printf("%d\n",a<=b ? a:b);
	 return 0;
	}
int main(int argc,char *argv[]){
	may(atoi(argv[1]),atoi(argv[2]));
	return 0;
}
