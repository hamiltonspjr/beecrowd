#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * mostrar os números pares entre 1 e 100 sem entrada
     */
     for(int i = 1; i <= 100; i++) {
         if(i % 2 == 0) {
             cout << i << endl;
         }
     }
 
    return 0;
}