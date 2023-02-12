/*
 * main.c
 * Resposta do exercício 4 do capítulo 5.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *f_1 = iniciar();
	Fila *f_2 = iniciar();
	Fila *f_3 = iniciar();

	enqueue(f_1, 2);
	enqueue(f_1, 7);
	enqueue(f_1, 17);
	enqueue(f_1, 20);
	enqueue(f_1, 38);

	enqueue(f_2, 4);
	enqueue(f_2, 10);
	enqueue(f_2, 15);
	enqueue(f_2, 22);
	enqueue(f_2, 29);

	while(!empty(f_1) && size(f_2) != 0) {

		int n1 = dequeue(f_1);
		int n2 = dequeue(f_2);

		if (n1 < n2) {
			enqueue(f_3, n1);
			enqueue(f_3, n2);
		} else {
			enqueue(f_3, n2);
			enqueue(f_3, n1);
		}
	}

	exibir(f_3);

	return 0;
}

