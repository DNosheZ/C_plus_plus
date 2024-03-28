#include <bits/stdc++.h> //se incluyen librerias, que incluyen estructuras de datos recientemente conocidas
using namespace std;
//macros 
#define FOR(i,n,m) for(int i=m; i<=n; i++);//investigar como definir

//definicion de tipo: alias a un tipo de dato
typedef long long ll;
typedef vector<int> vi;//vector 
typedef vector<ll> vl;
const string rj = "\n";//salto de linea global
const string tab = "\t";//espacio global
//tipos de variables
//int -> entero de 32bits<2*1^9
//long long -> entero de 64bits<10^18
//double-> flotante mas grande, al usarse en operaciones, si vuelve lento

//si se asignan valores invalidos para el tipo de varible, sucedera un error de overflow
//puesto que el valor no cabe en el tipo de dato

//creacion de funciones 
void f(string s){
    cout<<s<<rj;
}//version lenta

void g(string &s){//busca la direccion de memoria del dato ingresado
//asi no crea copias del dato en diferentes direcciones
    cout<<s<<rj;
}//version rapida

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);//para lectura rapida

    int h; cin>>h;
    char msg[11]="hola mundo";
    FOR(i,h){// uso del macro antes definido
        cout<<msg;
    }
    //casteos
    ll d=1000000ll*1000000; //con 1000000ll hago un casteo indirecto de entero a long long
    ll e=((ll)1000000)*1000000;//con ((ll)1000000) hago un casteo directo "
    cout<<d;
    cout<<e;

    //operaciones entre tipos datos
    /*
    long long * int -> long long
    int * double -> double
    long long * double -> double
    */
   //vectores y arrays
   vector<int> v(2); //defino un vector (de nombre v) de enteros con dos espacios
   array<int, 5> h={1,2,3,4,5}; //array de enteros con 5 posiciones, lleno
    string hola="hola masones";
    cout<<hola.back()<<rj;//accede e imprime lo ultima posicion de la cadena
    cout<<hola.substr(2,7)<<rj;//accede e imprime un substring formado desde la posicion 2 hasta la posicion 7 del string
    return 0;
    
}
