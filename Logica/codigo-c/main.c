#include <stdio.h>
#include "operaciones.h" // Incluimos nuestra libreria con comillas, no con < >

int main() {
int num1 = 10;
int num2 = 5;

printf("Suma: %d + %d = %d\n", num1, num2, sumar(num1, num2));
printf("Resta: %d - %d = %d\n", num1, num2, restar(num1, num2));

return 0;
}
