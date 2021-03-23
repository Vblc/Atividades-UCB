#include <stdio.h>

int main () {
	int horas, minutos, segundos;   //declarando variaveis
	
	printf ("Digite o numero de horas: " );
	scanf ("%d", &horas);    //recebe o numero de horas
	
	minutos = horas * 60;    //transforma hora em minutos
	segundos = horas * 3600;    //transforma hora em segundos
	
	printf("%d horas sao %d minutos e %d segundos", horas, minutos, segundos);   //mostra o numero de minutos e segundos
}
