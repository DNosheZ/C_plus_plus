#include <iostream>
using namespace std;
int main() {
    char texto[20];//array de caracteres, maximo 20
    cout<<"ingrese texto: ";
    cin.getline(texto,20);/*se evita suprimir el espacio dentro
    del ingreso para el array de texto*/
    cout<<"texto ingresado: "<<texto;
        
    return 0;
}
