#include <stdio.h>

int main () {
	int qntT, qntR, qntM;
	
	printf ("Escreva o tamanho total de fios em metros: ");
	scanf ("%d", &qntT);
	
	qntR = qntT / 50;
	qntM = qntT % 50;
	
	printf ("O total de rolos sera %d e sobrarao %d metros de fio avulso", qntR, qntM);
}
