#define VALOR_MAXIMO 20

int cache[VALOR_MAXIMO];

int fibonacci(int n) {
	int i;
	
	cache[1] = 1;
	cache[2] = 1;
	
	for (i = 3; i <= n; i++) {
		cache[i] = cache[i - 1] + cache [i - 2];
	}
	
	return cache[n];
}

int main (int argc, char const *argv[]) {
	int i;
	
	printf("%d\n", fibonacci(20));
	
	for (i = 0; i <= 20; i++) {
		printf("%d\n", cache[i]);
	}

	return 0;
}