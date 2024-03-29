#include <iostream>
using namespace std;
int main() {
    int num, i;
    while(1){
        cout<<"por favor ingrese un numero: "; cin>>num;
        if (num<0){
            break;
        }
        i+=num;
        
    }
    cout<<i;
        
    return 0;
}
