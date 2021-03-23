#include <stdio.h>

int main () {
	int dividendo, divisor, resto, quociente;  
	
	printf ("Digite o dividendo: ");
	scanf ("%d", &dividendo);
	
	printf ("Digite o divisor: ");
	scanf ("%d", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	printf ("%d dividido por %d resulta em %d com resto %d", dividendo, divisor, quociente, resto);
}
