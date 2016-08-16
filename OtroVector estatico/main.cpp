#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define T 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vec[T];
	int x, n, par=0, ipar=0, neg=0, mayor=vec[0], menor=vec[0];
	
	do{
		printf("\nNumero de elementos del vector: ");
		scanf("%d", &n);
	}while(n<5||n>T);
	
	for(x=0;x<n;x++){
		printf("\nV[%d]=", x);
		scanf("%d", &vec[x]);
	}
	for(x=0;x<n;x++){
		if(vec[x]%2==0){
			par++;
		}
		if(vec[x]%2!=0){
			ipar++;
		}
		if(vec[x]<0){
			neg++;
		}
		if(vec[x]>mayor){
			mayor=vec[x];
		}
		if(vec[x]<menor){
			menor=vec[x];
		}
	}
	printf("\n\nHay %d numeros pares", par);
	printf("\nHay %d numeros impares", ipar);
	printf("\nHay %d numeros negativos", neg);
	printf("\nEl numero mayor es %d", mayor);
	printf("\nEl numero menor es %d", menor);
	return 0;
}
