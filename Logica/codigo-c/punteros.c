#include <stdio.h>

int main()
{
    int num_cuenta;     // Declaramos la vairable con el nombre que usaremos
    int *p;                // Declaramos el puntero
    p = &num_cuenta;       // Usamos & para guardar la direccion de memoria

    printf("Introduce tu numero de cuenta:\n");
    scanf("%d", &num_cuenta);

    // AHORA SI, usamos el puntero para leer el valor ya guardado
    printf("Usando el puntero para leer el valor: %d\n", *p);

    // Las variables van FUERA de las comillas, despues de la coma
    printf("Direccion en memoria de la variable num_cuenta: %p, contenido de la variable: %d \n" , p, num_cuenta); 
    getchar();
    return 0;
}