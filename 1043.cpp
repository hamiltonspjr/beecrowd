#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
     // ler três valores reais
     // verificar sem formam ou não um triÂngulo
     // se sim, calcular o perímetro do triângulo
     // e mostrar a mensagem Perimetro = x
     // se não, calcular a área do trapézio mostrando a mensagem; Area = xx
     double A, B, C;
     cin>>A>>B>>C;
     cout << fixed << setprecision(1);
     if(A < (B + C) && B < (A + C) && C < (A + B)) {
         cout << "Perimetro = " << A + B + C <<endl;
     } else {
         cout << "Area = " << ((A + B) * C) / 2 <<endl;
     }
 
    return 0;
}