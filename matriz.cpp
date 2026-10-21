
#include <iostream> 
using namespace std;
int main() {
int fila = 0, columna = 0;
int m[4][4];

for (fila = 0; fila < 4; fila++) {
for (columna = 0; columna < 4; columna++) {
cout << "Ingrese el valor para [" << fila << "][" << columna << "]: ";
 cin >> m[fila][columna];
  }
}
cout << "\n--- Mostrando la matriz ---\n";
for (fila = 0; fila < 4; fila++) {
for (columna = 0; columna < 4; columna++) {
cout << m[fila][columna] << "\t";
  }
cout << endl;
}
return 0; 
}
