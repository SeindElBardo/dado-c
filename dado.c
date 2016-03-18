#include <stdlib.h>
#include <stdio.h>
#include <time.h>
	
	void inicializarSemilla(){
		struct timeval start;
		gettimeofday(&start, NULL);
		srand(start.tv_usec);	
	}


	int tirar (int caras){
		inicializarSemilla();
		return ((rand()%caras)+1);
	}
	int tirarVarios (int cantidad, int caras){
		inicializarSemilla();
		int resultado = 0;
		int ii;
		for (ii = 0; ii<cantidad; ii++){
			resultado= resultado + tirar(caras);
			printf("%i\n", resultado);
		}
		return resultado;
	}		
	int aleatorio (int numeroMax){//Contiene el 0
		inicializarSemilla();
		return rand()%(numeroMax+1);
		
	}
	int aleatorioInter (int numeroMin, int numeroMax){
		inicializarSemilla();
		return (numeroMin + (rand()%(numeroMax+1-numeroMin)));
	}
	int d20 (){
		return tirar(20);
	}
	int d10 (){
		return tirar(10);
	}
	int d100 (){
		return tirar(100);
	}
	int d12 (){
		return tirar(12);
	}
	int d8 (){
		return tirar(8);
	}
	int d6 (){
		return tirar(6);
	}
	int d4 (){
		return tirar(4);
	}
	int d2 (){
		return tirar(2);
	}
	int dPorcentaje (){
		return tirar(10)*10;
	}