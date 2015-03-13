
public class EspiralQuadradaOn {

	public static void main(String[] args) {		
		int n = 5;
		
		int[] coordenadas = new int[2];
		coordenadas[0] = 0;
		coordenadas[1] = 0;
		
		/* Sentido:  1 - cima;  2 - esquerda;  3 - baixo;  4 - direita */
		int sentido = 1;
		int marcaPasso = 1;
		int contaPasso = 0;
		int contaGiros = 0;
		
		for (int i = 0; i < n; i++) {
			if (contaPasso == marcaPasso) {
				if (sentido < 4) {
					sentido++;
				}else {
					sentido = 1;
				};
				contaPasso = 0;
				contaGiros++;
			};
			if (contaGiros == 2) {
				marcaPasso++;
				contaGiros = 0;
			};
			if (contaPasso < marcaPasso) {
				switch (sentido) {
					case 1:
						coordenadas[1]++;
						contaPasso++;
						break;
					case 2:
						coordenadas[0]--;
						contaPasso++;
						break;
					case 3:
						coordenadas[1]--;
						contaPasso++;
						break;
					case 4:
						coordenadas[0]++;
						contaPasso++;
						break;
				};
			};
		};
		 
		System.out.println("(" + coordenadas[0] + ", " + coordenadas[1] + ")");	
	}

}
