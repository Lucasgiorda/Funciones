#include<stdio.h>
#include<stdlib.h>

 int saludar(char* nombre) {
	printf("hola ,%s ,como estas?\n",nombre);
	return 0;
}
 int main(int argc ,char *argv[]){
         
	 saludar(argv[1]);
	return 0;
}
