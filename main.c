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
#ifndef grafo_h
#include "grafo.h"
#define grafo_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef nodo_h
#include "nodo.h"
#define nodo_h
#endif
//---------------------------------------------------------------------------------------------------
// PROTOTIPOS	
int main();
//---------------------------------------------------------------------------------------------------
int main(){
	Grafo G;
	inicializar_grafo(&G);
	imprimir_grafo(G);
	drijkstra(G,0,0);
	return 0;
}
//---------------------------------------------------------------------------------------------------
