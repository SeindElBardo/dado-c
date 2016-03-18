#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(!strcmp(argv[1], "d20")){
		printf("%i\n", d20 ());
			}
	else if(!strcmp(argv[1], "d12")){
		printf("%i\n", d12 ());
			}
	else if(!strcmp(argv[1], "d10")){
		printf("%i\n", d10 ());
			}
	else if(!strcmp(argv[1], "d8")){
		printf("%i\n", d8 ());
			}
	else if(!strcmp(argv[1], "d4")){
		printf("%i\n", d4 ());
			}
	else if(!strcmp(argv[1], "d2")){
		printf("%i\n", d2 ());
			}		
	else if(!strcmp(argv[1], "d6")){
		printf("%i\n", d6 ());
			}
	else if(!strcmp(argv[1], "d100")){
		printf("%i\n", d100 ());
			}
	else if(!strcmp(argv[1], "dPorcentaje")){
		printf("%i\n", dPorcentaje ());
			}						
	else{
		printf("El dado se ha caido de la mesa...\n");
	}

		//d10 (){
		//d20 (){
		//d100 (){
		//d12 (){
		//d6 (){
		//d4 (){
		//d2 (){
		//dPorcentaje (){
}