#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=10; i++){
        if(i==6 || i==9){
            continue;
        }
        cout<<i<<endl;
    }
        
    return 0;
}
