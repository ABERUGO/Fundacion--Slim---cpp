#include <stdio.h>

// Constante que define el tamaño maximo del arreglo
#define TAM 50

int main() {
// Declaracion de variables
int arreglo[TAM];
int indice, num_intermedio, numero, posicion;

// 1. Pedir la dimension del arreglo
printf("Ingresa la dimension del arreglo (cantidad de numeros): ");
scanf("%d", &numero);

// 2.  Pedir el numero que se va a insertar
printf("Ingresa el numero a insertar: ");
scanf("%d", &num_intermedio);


// 3. Pedir la posicion donde se insertara (0, 1, 2, etc)
printf("Ingresa la posicion en la que debe insertarse el numero: ");
scanf("%d", &posicion);

// 4. Llenar el arreglo original con los datos del usuario
for(indice = 0; indice < numero; indice++) {
printf("Ingresa el valor que tiene como posicion %d: ", indice);
scanf("%d", &arreglo[indice]);
}

// 5. Desplazar ñps elementos a la derecha para hacer espacio
// Empezamos desde el final (numero) hasta la posicion donde se insertara
for(indice = numero; indice > posicion; indice--) {
arreglo[indice] = arreglo[indice - 1];
}

// 6. Insertar el nuevo numero en la posicion indicada
arreglo[posicion] = num_intermedio;

// 7. Imprimir el arreglo final
printf("\n--- Arreglo final con el numero insertado ---\n");
// Ahora se imprime hasta 'numero' (inclusive) porque el arreglo crecio en 1
for (indice = 0; indice <= numero; indice++) {
printf("Posicion %d: %d\n", indice, arreglo[indice]);
}

return 0;

}

