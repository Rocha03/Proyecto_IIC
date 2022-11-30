/*Programa que usa dos funciones tanto para crear elaborar el factorial de un numero, y por otro lado
ls segunda servira para ejecturar la serie de Fibbonaci(Esta suma un determinado numero 1 con el siguiente, en
este caso 2, para hacer un bucle que evaluara tantos numeros como el usuario ingrese)
ROCHA GARCÍA MARIANO
GRUPO 1108*/
#include<stdio.h>

void Exponencial();
void Serie_De_Fibbonaci();


int main() {
	Exponencial();
	Serie_De_Fibbonaci();
	return 0;
}
void Exponencial(){
	printf("Ingresa el numero al cual quieres elevar a su exponencial: ");
	int iteraciones, i, exp;
	scanf_s("%d", &iteraciones);
	exp = 1;
	for (i = 1; i <= iteraciones; i++) {
		exp *= i; 
	}
	printf("El valor de la exponencial es: %d", exp);
}
void Serie_De_Fibbonaci() {
	
	int entrada;
	int contador, numInicial = 0, numSiguiente = 1, suma = 0;

	printf("Ingrese la cantiad de valores para la serie fibbonaci: ");
	scanf_s("%d", &entrada);

	printf("1 ");
	for (int contador = 1; contador <= entrada; contador++) {
		suma = numInicial + numSiguiente;//1,2
		printf("%i ", suma);//1,2
		numInicial = numSiguiente;//1,1
		numSiguiente = suma;//1,2
	}

	printf("\n\n"); 
	
}
//FB Mariano Rocha 
//Insta rocha_03