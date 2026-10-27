#include <stdio.h>

int main() {
int num, contador, factorial = 1;

printf("Introduzca un numero para calcular su factorial: ");
scanf("%d", &num);

// Bucle for que vimos en el video
for (contador = num; contador > 1;  contador--) {
factorial = factorial  * contador;
}

printf("\nEl factorial de %d es =  %d\n", num, factorial);

return 0;
}
