//Entrada: a, b, c;
//Saida: x1 e x2
//Processamento: calculo

#include <stdio.h>                                                         //biblioteca para entrada e saida (printf e scanf)
#include <math.h>                                                          //biblioteca matematica

double a, b, c, x1, x2, delta;                                              //decalrando variaveis

int main () {                                                               //função main (inicio basico do código)
	 
	printf ("Digite o valor de a: ");                                       //pede o valor de uma variavel
	scanf("%lf",&a);                                                        //associa o valor dado a variavel
	
	printf ("Digite o valor de b: ");
	scanf("%lf",&b);
	
	printf ("Digite o valor de c: ");
	scanf("%lf",&c);
	
	delta = (pow(b, 2) - 4*a*c);                                           //definindo como calcular delta
	
	if (a != 0) {                                                          //condicional para a == ou != de 0
		//parte para a != 0
		if (delta < 0) {                                                   //condicional se delta for menor que 0
			printf ("\nNao existem raizes reais");                          //exibe o resultado se delta < 0
		
		}else if (delta == 0) {                                            //condicional se delta = 0
			x1 = (-b) / (2*a);                                              //calculo da unica raiz se delta = 0
			printf ("\nPossui somente a raiz %.5lf", x1);                   //exibe o resultado se delta = 0
		
 		} else {                                                           //condicional se delta > 0
 			x1 = ( -b - sqrt(delta)) / (2*a);                               //calculo da primeira raiz se delta > 0
 			x2 = ( -b + sqrt(delta)) / (2*a);                               //calculo da segunda raiz se delta > 0
 			printf ("\nPossui duas raizes:\nx1:%.5lf\nx2:%.5lf", x1, x2);   //exibe o resultado se delta > 0 			
		}
    } 
	else { //parte para a == 0                                                              
		printf ("\nImpossivel calcular");                                   //exibe o resultado para a == 0
	}
	return 0;                                                             
}                                                                           //final do algoritimo
