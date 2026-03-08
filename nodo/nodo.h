#ifndef __NODO_H__
#define __NODO_H__

typedef struct Nodo Nodo;

Nodo* crearNodo(int valor);
int obtenerValor(Nodo* nodo);
void asignarValor(Nodo* nodo, int valor);
void destruirNodo(Nodo* nodo);

#endif
