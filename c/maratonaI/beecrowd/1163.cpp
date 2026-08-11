#include <bits/stdc++.h>

int main(){

	double pi = 3.14159;
	double g = 9.80665;

	double h = 0.0;
	double a = 0.0; double V = 0.0; int p1 = 0; int p2 = 0;
	int n = 0;

	while (scanf("%lf", &h) != EOF) {

		scanf("%d %d", &p1, &p2);
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%lf %lf", &a, &V);

			double alpha_rad = a * (pi / 180.0);
			double v_sin = V * sin(alpha_rad);
			double v_cos = V * cos(alpha_rad);
			double X = (v_cos / g) * (v_sin + sqrt((v_sin * v_sin) + (2.0 * g * h)));
		
			if ((X>= p1) && (X<= p2)) {
				printf("%.5lf -> DUCK\n", X);	
			}
			else {
				printf("%.5lf -> NUCK\n", X);	
			}

		}
	}

	return 0;
}
