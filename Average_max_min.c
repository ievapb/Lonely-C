//Created 2010-02-06
#include <stdio.h>
int main () {
	int suma, kiekis, skaicius, min, max;
        printf ("iveskite skaicius is N aibes, pabaigos pozymis 0 \n");
        skaicius = -1;
        while (skaicius < 0 && skaicius != 0){ 
              scanf ("%d", &skaicius); 
              if (skaicius < 0)
                 printf ("iveskite teigiama skaiciu\n");
        }         
        suma = 0; kiekis = 0; min = max = skaicius;
        while (skaicius != 0){
                suma = suma + skaicius;
                kiekis = kiekis + 1;
                if (skaicius >= max)
                        max = skaicius;
                else if (skaicius <= min)
                                min = skaicius;
                scanf ("%d", &skaicius);
                while (skaicius < 0) {
					printf ("iveskite teigiama skaiciu\n");
					scanf ("%d", &skaicius);
				}	
        }
        if (suma != 0)
                printf ("skaiciu vidurkis yra %.2f\nmin yra %d\nmax yra %d\n", (float)suma / kiekis, min, max);
        else printf ("pirmas ivestas neneigiamas skaicius yra 0\n");
	return 0;
}
