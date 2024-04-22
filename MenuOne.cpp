#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
    const int tam = 5;
	int arr[tam] = {1,25,87,56,101};
	int opt;
	cout << "Que deseas hacer (ingresa el numero correspondiente a la opcion deseada)" << endl;
	cout<<endl;
	cout << "Revisar si todos los numeros en el arreglo son primos (1)" << endl;
	cout << "Mostrar el arreglo al reves (2)" << endl;
	cout << "Mostrar todos los elementos en el arreglo, elevados al cubo(3)" << endl;
	cout << "Prueba de divisibilidada personalizada(4)"<<endl;
	cout << "Divisores de los numeros en el arreglo(5)" << endl;
	cin >> opt;
    if(opt==1){
        for (int i = 0; i < tam; ++i) {
            int sumPrimo=0;
            for (int j = 1; j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    ++sumPrimo;
                }
            }
            if(sumPrimo>2){
                    cout<<arr[i]<<" no es primo"<<endl;
            }else{
                cout<<arr[i]<<" es primo"<<endl;
            }
        }
    }else if(opt==2){
        for (int i =1; i<=tam; ++i) {
            cout << arr[tam-i]<< ' ';
        }
    }
    else if(opt==3){
        for (int i = 0; i < tam; ++i) {
            cout <<pow(arr[i],3) << ' ';
        }
    }else if(opt==4){
        int divisor;
        cout << "Por favor ingrese un numero para hacer las pruebas de divisibilidad: ";
        cin >> divisor;
        for (int i = 0; i < tam; ++i) {
            if (arr[i] % divisor !=0 ) {
                cout << arr[i] << " no es divisible entre "<<divisor<<endl;
            }
            else {
                cout << arr[i] << " es divisible entre " << divisor << endl;
            }
        }
    }else if(opt==5){
        for (int i = 0; i < tam; ++i) {
            cout << "Los divisores de " << arr[i] << " son: "<< endl;
            for (int k = 1; k <= arr[i]; k++) {
                if ( arr[i] % k == 0) { 
                    cout<<k<<' ';
                }
            }
            cout<<endl<<endl;
        }
    }else{
        cout << "Opción no válida. Debes ingresar un número entre 1 y 5." << std::endl;
    }
	return 0;
}
