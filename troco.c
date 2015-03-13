#include <math.h>

void troco(int *moedasDisponiveis, int *troco, int tamanho, int valor) {
	int i;
	
	for (i = 0; i < tamanho; i++) {
		troco[i] = floor(valor / moedasDisponiveis[i]);
		valor = valor - troco[i] * moedasDisponiveis[i];
	}
}

int main (int argc, char const *argv[]) {
	int moedasDisponiveis[] = {100, 25, 10, 5, 1};
	int tamanho = sizeof(moedasDisponiveis) / sizeof(moedasDisponiveis[0]);
	int resultado[tamanho];
	
	troco(&moedasDisponiveis[0], &resultado[0], tamanho, 289);
	
	int i;
	for (i = 0; i < tamanho; i++) {
		printf("Moeda de %d = %d unidades\n", moedasDisponiveis[i], resultado[i]);
	}
	
	return 0;
}