#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char op;
    cout<<"por favor ingrese un numero: ";cin>>num1;
    cout<<"por favor ingrese el operador deseado: "<<endl<<"+ - * / "<<endl;cin>>op;
    cout<<"por favor ingrese otro numero: ";cin>>num2;
    switch(op){
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    default:
        cout<<"operador no soportado.";
        break;
        
    }
    return 0;
}
