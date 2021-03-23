#include <stdio.h>

int main () {
	float area,raio;   //declarando variaveis
	
	printf ("Digite o raio: " );
	scanf ("%f", &raio);    //recebe o numero de horas
	
	area = raio * 3.14;    //calcula a area com o raio
	
	printf("um circulo com %f de raio tem %f de area", raio, area);   //mostra a area
}
