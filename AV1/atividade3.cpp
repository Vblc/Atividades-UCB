#include <stdio.h>

int main () {
	float n1,n2,n3,media;
	
	printf ("Digite o primeiro numero: " );
	scanf ("%f", &n1);   
	printf ("Digite o segundo numero: " );
	scanf ("%f", &n2);  
	printf ("Digite o terceiro numero: " );
	scanf ("%f", &n3);
	
	media = (n1 + n2 + n3)/3;

	printf("A media entre %.2f, %.2f e %.2f sera %.2f", n1, n2, n3, media);
}
