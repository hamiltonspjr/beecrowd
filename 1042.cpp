#include <iostream>
 
using namespace std;
 
int main() {
    // código nada performatico mas é o que consegui pensar no momento
     // ler 3 valores inteiros
     // ordenar em ordem crescente
     // imprimir cada um em uma linha
     int a,b,c;
     cin>>a>>b>>c;
     if(a < b && b < c) {
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
        cout << endl;
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     } else if(a < c && c < b) {
          cout << a <<endl;
         cout << c <<endl;
         cout << b <<endl;
          cout << endl;
        cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     } else if(b < a && a < c) {
         cout << b <<endl;
         cout << a <<endl;
         cout << c <<endl;
          cout << endl;
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     } else if(b < c && c < a) {
         cout << b <<endl;
         cout << c <<endl;
         cout << a <<endl;
          cout << endl;
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     } else if(c < a && a < b) {
         cout << c <<endl;
         cout << a <<endl;
         cout << b <<endl;
          cout << endl;
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     } else if(c < b && b < a) {
         cout << c <<endl;
         cout << b <<endl;
         cout << a <<endl;
          cout << endl;
         cout << a <<endl;
         cout << b <<endl;
         cout << c <<endl;
     }
 
    return 0;
}