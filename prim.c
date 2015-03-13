#include<stdio.h>
#define NUMERO_NOS 4

int a, b, u, v, i, j, ne = 1;
int visitado[NUMERO_NOS + 1] = {0}, min, mincusto = 0, custo[NUMERO_NOS + 1][NUMERO_NOS + 1];

int main (int argc, char const *argv[]) {	
	//Todas as distâncias 999. Esta será a representação quando não houver ligação entre nós.
	for (i = 1; i <= NUMERO_NOS; i++) {
		for (j = 1; j <= NUMERO_NOS; j++) {
			custo[i][j] = 999;
		}
	}
	
	//1
	// custo[1][2] = 2;
	// custo[1][4] = 3;
	// custo[1][5] = 6;
	// 
	// custo[2][1] = 2;
	// custo[2][3] = 4;
	// custo[2][4] = 3;
	// 
	// custo[3][2] = 4;
	// custo[3][4] = 7;
	// custo[3][5] = 3;
	// 
	// custo[4][1] = 3;
	// custo[4][2] = 3;
	// custo[4][3] = 7;
	// custo[4][5] = 3;
	// 
	// custo[5][1] = 6;
	// custo[5][3] = 3;
	// custo[5][4] = 3;
	
	//2
	custo[1][2] = 24;
	custo[1][3] = 8;
	
	custo[2][1] = 24;
	custo[2][3] = 23;
	custo[2][4] = 24;
	
	custo[3][1] = 8;
	custo[3][2] = 23;
	custo[3][4] = 11;
	
	custo[4][1] = 22;
	custo[4][2] = 24;
	custo[4][3] = 11;
	
	visitado[1] = 1;
	
	while (ne < NUMERO_NOS) {
		for (i = 1, min = 999; i <= NUMERO_NOS; i++) {
			for (j = 1; j <= NUMERO_NOS; j++) {
				if (custo[i][j] < min) {
					if (visitado[i] != 0) {
						min = custo[i][j];
						a = u = i;
						b = v = j;
					}
				}
			}
		}
		if (visitado[u] == 0 || visitado[v] == 0) {
			printf("Aresta %d:(%d %d) custo:%d\n", ne++, a, b, min);
			mincusto += min;
			visitado[b] = 1;
		}
		custo[a][b] = custo[b][a] = 999;
	}
	printf("Custo mínimo = %d", mincusto);
	
	return 0;
}