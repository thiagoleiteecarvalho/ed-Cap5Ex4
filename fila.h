/*
 * fila.h
 * Header de definição da ED Fila Clássica.
 * Author: Thiago Leite
 */

#pragma once

typedef struct elemento {
 int valor;
 struct elemento *proximo;
} Elemento;

typedef struct fila {
 Elemento *cabeca;
 Elemento *fim;
 int tamanho;
} Fila;

Fila* iniciar();
void enqueue(Fila *f, int numero);
int dequeue(Fila *f);
int empty(Fila *f);
int size(Fila *f);
void exibir(Fila *f);
