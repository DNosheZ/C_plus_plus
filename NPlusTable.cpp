// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const string rj = "\n";
int main() {
    int n,h=1;
    cout<<"Ingrese el numero para generar la tabla de multiplicar: ";cin>>n;
    while(h<=10){
        cout<<h<<" x "<<n<<" = "<<h*n<<rj;
        h++;
    }
    
    

    return 0;
}
