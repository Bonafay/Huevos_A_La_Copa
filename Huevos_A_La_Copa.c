
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define DENSIDAD 1.038
#define LITTLEMASA 47 
#define BIGMASA 67
#define CAPACIDADKAL 3.7
#define CONDUCTIVIDAD 0.0054

float littleEgg(float);
float bigEgg(float);

int main(void)
{
	int tipoDeHuevo = 0;
	int continuar = 0;
	float temperaturaInicial;
	
	do
	{
	
		system("cls");
		printf("\tHuevos a la copa\n");
		printf("Realizar calculos para:\n");
		printf("1) Huevos pequeños\n");
		printf("2) Huevos grandes\n");
		scanf("%d", &tipoDeHuevo);
		fflush(stdin);
					
		printf("Ingrese la temperatura inicial del huevo\n");
		scanf("%f", &temperaturaInicial);
		fflush(stdin);
		
		switch(tipoDeHuevo)
		{
			case 1:
				printf("El tiempo que debe pasar para que el huevo pequeño este a su copa es de: %f", littleEgg(temperaturaInicial), " segundos");
				break;
			case 2:
				printf("El tiempo que debe pasar para que el huevo grande este a su copa es de: %f", bigEgg(temperaturaInicial), " segundos");
				break;
			
		printf("\nDesea salir?\n");
		printf("1) SI\n");
		printf("0) NO\n");
		scanf("%d", &continuar);
		fflush(stdin);
		system("cls");
		}
	
	}while(continuar != 0);
	
	getch();
	return 0;
}

// LISTA DE FUNCIONES
float littleEgg(float temperaturaInicial)
{
	float numerador, denominador;
	float logNumerador, logDenominador;
	
}

float bigEgg(float temperaturaInicial)
{
	
}
