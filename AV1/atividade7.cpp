#include <stdio.h>
#include<cstring>

int main () {
	char nome[20], genero;
	int matricula, horas, recebe, salario;
	
	printf ("escreva seu nome: ");
	gets (nome);
	
	printf ("escreva seu genero (F ou M): ");
	scanf ("%c", &genero);
	
	printf ("escreva sua matricula: ");
	scanf ("%d", &matricula);
	
	printf ("escreva suas horas trabalhadas: ");
	scanf ("%d", &horas);
	
	printf  ("escreva o valor que recebe por hora: ");
	scanf ("%d", &recebe);
	
	salario = recebe * horas;
	
	printf ("\n nome: %s \n genero: %c \n matricula: %d \n horas trabalhadas: %d \n valor que recebe por hora: %d \n salario: %d",
	nome, genero, matricula, horas, recebe, salario);
}
