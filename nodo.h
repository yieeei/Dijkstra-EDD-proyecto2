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
# define tam 9
//---------------------------------------------------------------------------------------------------
typedef struct tipo_nodo{	char letra;	int peso,pos,color;}Nodo;
//---------------------------------------------------------------------------------------------------
// PROTOTIPOS	
void inicializar_nodo(Nodo nodo);
void imprimir_nodo(Nodo nodo);
//---------------------------------------------------------------------------------------------------
void inicializar_nodo(){}
//---------------------------------------------------------------------------------------------------
void imprimir_nodo(Nodo nodo){
	printf("%c:\tpos: %i\tpeso: %i\tcolor: %i\n", nodo.letra, nodo.pos, nodo.peso, nodo.color);
}
//---------------------------------------------------------------------------------------------------
