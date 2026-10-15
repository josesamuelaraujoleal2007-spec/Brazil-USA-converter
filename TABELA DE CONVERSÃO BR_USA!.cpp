#include <stdio.h>

 double celsius_para_fahrenheit(double c)              {return c * 9.0 / 5.0 + 32.0; }
 double fahrenheit_para_celsius(double f)              {return  (f + 32.0) * 5.0 / 9.0; }
 double reais_para_dolar(double reais, double cotacao) {return reais / cotacao; }
 double dolar_para_reais(double dolar, double cotacao) {return dolar * cotacao; }
 double km_para_milhas(double km)                      {return km * 0.621371; }
 double milhas_para_km(double mi)                      {return mi / 0.621371; }
 double kilos_para_libras(double kg)                   {return kg * 2.20462; }
 double libras_para_kilos (double lb)                  {return lb / 2.20462; }
  
  void menu (void) {
  
  printf ("CONVERSOR DE UNIDADES\n");
  printf ("1 - Celsius para Fahrenheit\n");
  printf ("2 - Fahrenheit para Celsius\n");
  printf ("3 - Reais para Dolar\n");
  printf ("4 - Dolar para Reais\n");
  printf ("5 - Quilometro para Milhas\n");
  printf ("6 - Milhas para Quilometro\n");
  printf ("7 - Kilos para Libras\n");
  printf ("8 - Libras para Kilos\n");
  printf ("0 - Sair\n");
  printf ("Escolha: ");
}
  
  
  int main(void) {
  	int opcao;
  	double valor, cotacao; 
  	
  	printf ("Conversor de Medidas Brasileiras para Medidas Americans\n");
  	do {
  		menu ();
  		if (scanf("%d", &opcao) !=1) {
  			while (getchar() != '\n'); /* limpa entrada invalida */
  			opcao= -1;
		  }
		  if (opcao ==0) break;
		  if (opcao < 1 || opcao > 8) {
		  	printf ("Opcao Invalida!\n");
		  	continue;
		  }
		  printf("Valor: ");
		  if (scanf("%lf", &valor) !=1) {
		  	while (getchar() != '\n');
		  	printf ("Valor invalido!\n");
		  	continue;
	
		  }
		  switch (opcao) {
		  	case 1: printf ("%.2f C = %.2f F\n", valor, celsius_para_fahrenheit(valor));
		  	break;
		  	case 2: printf ("%.2F F = %.2f C\n", valor, fahrenheit_para_celsius(valor));
		  	break;
		  	case 3: printf ("Cotacao do dolar (Quantos reais vale 1 USD): ");
		  	if (scanf("%lf", & cotacao) !=1 || cotacao <=0) {
			  while (getchar() != '\n');
			  printf ("Cotacao invalida!\n");
			  break;
			  }
			printf ("R$ %.2f = US$ %.2f\n", valor, reais_para_dolar(valor, cotacao));
			  break;
			case 4: printf("Cotacao do Dolar (quantos reais vale 1 USD): ");
			  if (scanf("lf", & cotacao) !=1 || cotacao <=0) {
			  	while (getchar() != '\n')
			  	printf ("Cotacao Invalida!\n");
			  	break;
			  }
			  printf("US$ %.2f = R$ %.2f\n", valor, dolar_para_reais(valor, cotacao));
			  break;
			case 5: printf ("%.2f km = %.2f mi\n", valor, km_para_milhas(valor));
			break;
			case 6: printf ("%.2f mi = %.2f km\n", valor, milhas_para_km(valor));
			break;
			case 7: printf ("%.2f kg = %.2f lb\n", valor, kilos_para_libras(valor));
			break;
			case 8: printf ("%.2f lb = %.2f kg\n", valor, libras_para_kilos(valor));
			break;
		  }
		  
	  } while (1);
	  printf ("Ate mais!\n");
	  return 0;
  }
  
  
 
    
