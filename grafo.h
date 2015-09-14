//---------------------------------------------------------------------------------------------------
#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef nodo_h
#include "nodo.h"
#define nodo_h
#endif
//---------------------------------------------------------------------------------------------------
# define tam 9
//---------------------------------------------------------------------------------------------------
typedef struct tipo_grafo{	int pesos [tam][tam];	Nodo nodos[tam];}Grafo;
//Aquí sirve para la interacción, osea estatico.

//---------------------------------------------------------------------------------------------------
// PROTOTIPOS	
void inicializar_matriz(int matriz[tam][tam]);
void inicializar_nodos(Grafo *G);
void inicializar_grafo(Grafo *G);
void imprimir_grafo(Grafo G);
void drijkstra(Grafo G, int S, Nodo nodoActual);
//---------------------------------------------------------------------------------------------------
void inicializar_matriz(int matriz[tam][tam]){
//				 a.b.c.d.e.f.g.h.i
//				 0.1.2.3.4.5.6.7.8
	matriz[tam][tam]={	{0,3,4,5,5,0,0,0,0},//0a
		     		{3,0,4,0,0,0,0,0,0},//1b
 		    		{4,4,0,0,1,0,0,0,0},//2c
		 		{5,0,0,0,1,5,0,0,0},//3d
				{0,0,1,3,0,1,0,0,0},//4e
				{0,0,0,1,4,0,0,0,4},//5f
				{0,0,0,0,0,0,0,4,8},//6g
				{0,0,0,0,0,0,3,0,1},//7h
				{0,0,0,0,0,5,1,2,0} //8i
				};
}
//---------------------------------------------------------------------------------------------------
void inicializar_nodos(Grafo *G){

	(*G).nodos[0]='a';	(*G).nodos[1]='b';	(*G).nodos[2]='c';	
	(*G).nodos[3]='d';	(*G).nodos[4]='e';	(*G).nodos[5]='f';
	(*G).nodos[6]='g';	(*G).nodos[7]='h';	(*G).nodos[8]='i';

	for (int i=0; i<tam; i++){
		(*G).nodos[i].pos=i;
		(*G).nodos[i].peso=999;
		(*G).nodos[i].color=0;
	}
}
//---------------------------------------------------------------------------------------------------
void inicializar_grafo(Grafo *G){

	int matriz[tam][tam];
	inicializar_matriz(matriz);
	inicializar_nodos(G);

	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			(*G).pesos[i][j]=matriz[i][j];
		}
	}
}
//---------------------------------------------------------------------------------------------------
void imprimir_matriz(Grafo G){

	printf("\t\ta  b  c  d  e  f  g  h  i\n");
	printf("\t\t0  1  2  3  4  5  6  7  8\n");
	for (int i=0; i<tam; i++){
		printf("\t\t");
		for (int j=0; j<tam; j++){
			printf("%i  ", (G.pesos[i][j]) );
		}
	}
}
//---------------------------------------------------------------------------------------------------
void imprimir_nodos(Grafo G){

	for (int i=0; i<tam; i++){
		imprimir_nodo(G.nodos[i]);
		printf("\n");
	}
}
//---------------------------------------------------------------------------------------------------
void drijkstra(Grafo G, int S, Nodo nodoActual){
	
}
//---------------------------------------------------------------------------------------------------
