
public class EspiralQuadradaO1 {
	
	public static void main(String[] args) {
		int n = 5; //Para n = 5
		
		int yMax = (int) ((1 + Math.sqrt(n)) / 2);
		int xMax = yMax;
		
		int nSuperior = (yMax + xMax + 1) * (yMax + xMax + 1);
		int nInferior1 = (yMax + xMax -1) * (yMax + xMax -1);
		
		int perimetro = nSuperior - nInferior1;
		int lMaior = perimetro / 4;
		int lMenor = lMaior - 1;
		
		int y = 0;
		int x = 0;
		
		if (n < (nSuperior) && n > (nSuperior - lMaior - 1)) {
			x = xMax;
			int k1 = nSuperior - n;
			y = yMax -k1 +1;
		} else if (n <= (nSuperior - lMaior - 1) && n > (nSuperior - 2 * lMaior - 1)) {
			y = -1 * yMax;
			int h1 = nSuperior -lMaior -1;
			int k1 = h1 - n;
			x = xMax -k1;
		} else if (n <= (nSuperior - 2 * lMaior - 1) && n > (nSuperior - 3 * lMaior - 1)) {
			x = -1 * xMax;
			int h1 = nInferior1 + lMenor;
			int k1 = n - h1;
			y = yMax -k1;
		} else if (n <= (nSuperior - 3 * lMaior - 1)) {
			y = yMax;
			int k1 = n - nInferior1;
			x = xMax - k1 -1;
		};
		
		System.out.println("(" + x + ", " + y + ")");
	}

}
