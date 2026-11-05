#include <stdio.h>

// Creamos nuestra propia funcion llamada circularFactorial
int calcularFactorial(int n) {
// 1. EL CASO BASE (¡La pieza que faltaba!)
if (n == 0 || n == 1) {
return 1;
} else { 
// 2. La "Llamada Recursiva": La funcion se ñña,a a si misma aqui.
return n * calcularFactorial(n - 1);
  }
}
int main() {
int num;

printf("Introduzca un numero para calcular su factorial: ");
scanf("%d", &num);

// Llamamos a la funcion magica
int resultado = calcularFactorial(num);

printf("\nEl factorial de %d es = %d\n", num, resultado);

return 0;
}
