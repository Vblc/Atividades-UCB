#include <stdio.h>

int main () {
	float pn, sn, media;
	
	printf ("digite a primeira nota: ");
	scanf ("%f", &pn);
	
	if (pn > 10 or pn < 0) return 0;
	else
	
	printf ("digite a segunda nota: ");
	scanf ("%f", &sn);
	
	if (sn > 10 or sn < 0) return 0;
	else
	
	media = (pn * 3.5 + sn * 7.5) / 11;
	
	printf ("A media final sera %.2f", media);
}
