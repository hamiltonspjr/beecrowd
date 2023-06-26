#include <iostream>
 
using namespace std;
 
int main() {
    double valores[6];
    int quantidadeValoresPositivos = 0;
    for(int i = 0; i < 6; i++) {
        cin>>valores[i];
    }
    for(int i = 0; i < 6; i++) {
        if(valores[i] > 0) {
            quantidadeValoresPositivos++;
        }
    }
    cout<< quantidadeValoresPositivos << " valores positivos" <<endl;
    return 0;
}