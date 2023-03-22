#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int choice;
	int cont_rj;
	int cont_rm;
	// Declaro la eleccion y los contadores de ronda
	for (int i = 1; i < 6; i++) {
		int cvj = 0;
		// Declaro el contador de victorias del jugador
		int cvm = 0;
		// Declaro el contador de victorias de la maquina
		for (int j = 1; j < 4; j++) {
			printf("Ronda %d, partida %d\n", i, j);
			
			// Formo las rondas y las partidas
			
			int m = rand() % 3 + 1;
			
			// Creo la variable máquina y le asigno un número aleatorio del 1 al 3	
			
			printf("Elija piedra, papel o tijera (1,2,3): ");
			scanf("%d", &choice);
			
			// Guardo la decision del usuario en la variable choice

			if (choice == m) {
				printf("Empate\n");
				j--;
			}
			else if (choice == 1 && m == 3) {
				printf("Ganaste\n");
				cvj++;
			}
			else if (choice == 2 && m == 1) {
				printf("Ganaste\n");
				cvj++;
			}
			else if (choice == 3 && m == 2) {
				printf("Ganaste\n");
				cvj++;
			}
			
			// Hago todos los casos de victoria posibles
			
			else if (choice == 1 && m == 2) {
				printf("Perdiste\n");
				cvm++;
			}
			else if (choice == 2 && m == 3) {
				printf("Perdiste\n");
				cvm++;
			}
			else if (choice == 3 && m == 1) {
				printf("Perdiste\n");
				cvm++;
			}
			
			// Hago todos los casos de derrota posibles
			
			if (cvj >= 2) cont_rj++;
			if (cvm >= 2) cont_rm++;
			
			// Sumo las victorias a rondas ganadas
		}
	}
	if (cont_rj > cont_rm) printf("Ganaste el juego\n");
	if (cont_rj < cont_rm) printf("Perdiste el juego\n");
}
