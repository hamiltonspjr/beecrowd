#include <iostream>
#include<iomanip> 
using namespace std;

 int main() {
     // ler um código
     // ler a quantidade do item
     // calcular o valor total do item (quantidade * valor unitário)
     // imprimir na tela
     int codigo, quantidade;
     cin >> codigo >> quantidade;
     cout<<fixed<<setprecision(2);
     switch(codigo) {
         case 1:
         cout << "Total: R$ " << quantidade * 4.00 << endl;
         break;
         case 2:
         cout << "Total: R$ " << quantidade * 4.50 << endl;
         break;
         case 3:
         cout << "Total: R$ " << quantidade * 5.00 << endl;
         break;
         case 4:
         cout << "Total: R$ " << quantidade * 2.00 << endl;
         break;
         case 5:
         cout << "Total: R$ " << quantidade * 1.50 << endl;
         break;
     }
 
    return 0;
}