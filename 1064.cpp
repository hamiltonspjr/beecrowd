#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  
     float valores[6], somaTotal;
     int quantidadeValoresPositivos = 0;
     for(int i = 0; i < 6; i++) {
         cin>>valores[i];
     }
     
     for(int i = 0; i < 6; i++) {
         if(valores[i] > 0) {
             somaTotal = somaTotal + valores[i];
             quantidadeValoresPositivos++;
         }
     }
     cout<< quantidadeValoresPositivos <<" valores positivos" <<endl;
     cout << fixed << setprecision(1);
     cout << somaTotal / quantidadeValoresPositivos << endl;
     
 
    return 0;
}