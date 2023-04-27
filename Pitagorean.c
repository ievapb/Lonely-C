// Created 2011-10-01
#include <stdio.h>

// formule a^2 = b^2 + c^2, kur a yra izambine, b ir c - statiniai

int main () {
	long int a, b, c, kiekis;
	kiekis = 0;
	for (a = 1; a <= 500; a++) {
		for (b = 1; b <= 500; b++) {
			for (c = 1; c <= 500; c++) {
				if (c*c + b*b == a*a) {
					printf ("a=%d, b=%d, c=%d\n", a, b, c);
					kiekis = kiekis + 1;
				}
            }
		}
	}	
	printf ("Pitagoro trejetu yra %d\n", kiekis);			
	return 0;
}
