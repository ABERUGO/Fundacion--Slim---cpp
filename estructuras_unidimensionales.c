#include <stdio.h>

int main()
{
    // Declaramos el arreglo con tamaño 20 para tener espacio extra al insertar 
    int arreglo[20];
    int tam, pos, indice, numero;

    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &tam);

    // Validacion basica para no salirnos del arreglo
    if (tam > 20 || tam <= 0) {
        printf("Tamaño no valido. Debe ser entre 1 y 20. \n");
        return 1;
    }
    // 1. LLenar el arreglo
    for (indice = 0; indice < tam; indice++) {
        printf("Introduce un valor numerico para el arreglo: ");
        scanf("%d", &arreglo[indice]); 
        }

        // 2. Pedir la posicion y el numero a insertar
        printf("En que posicion quiere insertar el numero? (1 a %d): ", tam + 1);
        scanf("%d", &pos);

        // Validcion de la posicion
        if (pos < 1 || pos > tam + 1) {
            printf("Posicion no valida. \n");
            return 1;
        }
        printf("Introduce el numero: ");
        scanf("%d", &numero);

        // 3. Desplazar los elementos a la derecha (¡La parte mas importante!)
        // Empezamos desde el final hacia la posicion deseada
        for (indice = tam - 1; indice >= pos - 1; indice--) {
            arreglo[indice + 1] = arreglo[indice];
        }

        // 4. Insertar el nuevo numero en la posicion indicada
        // Restamos 1 por que C cuenta desde cero. pero el usuario desde 1
        arreglo[pos - 1] = numero;

        // 5. Aumentar el tamaño del arreglo
        tam++;

        // 6. Mostar ek arregki final
        printf("El arreglo final es: \n");
        for (indice = 0; indice < tam; indice++) {
            printf("%d ", arreglo[indice]);
        }
        printf("\n");

        return 0;
}





