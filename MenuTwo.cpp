#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int tam = 15;
    int arr[tam] = {456,425,938,1,418,13724,7,536,163522353,873,363331,5,239,793,609};
    int opt;
    cout << "Que deseas hacer (ingresa el numero correspondiente a la opcion deseada)" << endl;
    cout << endl;
    cout << "Crear un segundo arreglo con la cantidad de cifras pares en cada numero de arreglo(1)" << endl;
    cout << "Crear un segundo arreglo con la suma de las cifras de cada numero del arreglo(2)" << endl;
    cout << "Revisar si un numero ingresado esta dentro de las cirfras de cada numero del arreglo(3)" << endl;
    cout << "Mostrar los numeros pares que esten en el arreglo(4)" << endl;
    cout << "Mostrar cada numero del arreglo, alreves(5)" << endl;
    cin >> opt;
    if (opt == 1) {
        int arr1[tam];
        for (int i = 0; i < tam; ++i) {
            int pares = 0;
            
            int eva = arr[i];
            //dividir el numero en sus digitos, y colocarlos en un 
            vector<int> digitos = {};

            // Extraer dígitos mientras el número sea mayor que 0
            while (eva > 0) {
                int digito = eva % 10; // Obtener el último dígito
                digitos.insert(digitos.begin(), digito); // Insertar al inicio del vector
                eva /= 10; // Remover el último dígito
            }
            for (int m=0; m < digitos.size();++m) {
                if (digitos[m] % 2 == 0) {
                    ++pares;
                }
            }
            arr1[i]==pares;

        }
        
    }
    else if (opt == 2) {
        int arr1[tam];
        for (int i = 0; i < tam; ++i) {
            int sum2=0;
            int eva = arr[i]; 
            vector<int> digitos = {};
            

            while (eva > 0) {
                int digito = eva % 10;
                digitos.insert(digitos.begin(), digito); 
                eva /= 10; 
            }
            for(int a:digitos){
                sum2+=a;
            }
            arr1[i]=sum2;
        }
    }
    else if (opt == 3) {
        int num; cout << "Ingrese el numero a revisar: "; cin >> num;
        for (int i = 0; i < tam; ++i) {
            int eva = arr[i];
            vector<int> digitos = {};
            bool encontrado=false;

            while (eva > 0) {
                int digito = eva % 10;
                digitos.insert(digitos.begin(), digito);
                eva /= 10;
            }
            for (int b : digitos) {
                if (b == num) {
                    encontrado = true;
                    break;
                }
            }

            if (encontrado) {
                cout <<num << " está en " <<arr[i] <<endl;
            }
            else {
                cout <<num << " no está en " << arr[i] << endl;
            }

        }
        
    }
    else if (opt == 4) {
        for (int i = 0; i < tam; ++i) {
            if (arr[i] % 2 == 0)
                cout << arr[i] << ' ';
        }
        
    }
    else if (opt == 5) {
        for (int i = 0; i < tam; ++i) {
            int eva = arr[i];
            vector<int> digitos = {};
            int bm = 0;

            while (eva > 0) {
                int digito = eva % 10;
                digitos.insert(digitos.begin(), digito);
                eva /= 10;
            }
            for (int h = 1; h <=digitos.size(); ++h) {
                bm += digitos[digitos.size()-h];
                if(h!=digitos.size()){
                    bm *= 10;
                }
                
                
            }
            cout << bm << ' ';
        }

    }
    else {
        cout << "Opción no válida. Debes ingresar un número entre 1 y 5." << std::endl;
    }
    return 0;
}
