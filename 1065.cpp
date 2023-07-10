#include <iostream>
 
using namespace std;
 
int main() {
    int valores[5], quantidadeValoresPares;
    for(int i = 0; i < 5; i++) {
        cin>>valores[i];
    }
    for(int i = 0; i < 5; i++) {
        if(valores[i] % 2 == 0) {
            quantidadeValoresPares++;
        }
    }
    cout << quantidadeValoresPares << " valores pares" << endl;
    return 0;
}