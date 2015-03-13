int max(int x, int y) {
	if (x >= y) {
		return x;
	}
	return y;
}

int main (int argc, char const *argv[]) {
	int i, j;	

	int n = 5;

	int piramide[n][n];
	
	piramide[0][0] = 7;

	piramide[1][0] = 3;
	piramide[1][1] = 8;	

	piramide[2][0] = 8;
	piramide[2][1] = 1;
	piramide[2][2] = 0;

	piramide[3][0] = 2;
	piramide[3][1] = 7;
	piramide[3][2] = 4;
	piramide[3][3] = 4;

	piramide[4][0] = 4;
	piramide[4][1] = 5;
	piramide[4][2] = 2;
	piramide[4][3] = 6;
	piramide[4][4] = 5;

	for (i = n - 2; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			piramide[i][j] = piramide[i][j] + max(piramide[i + 1][j], piramide[i + 1][j + 1]);
		}
	}
	printf("%d", piramide[0][0]);
	
	return 0;
}