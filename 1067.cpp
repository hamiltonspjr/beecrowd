#include <iostream>
 
using namespace std;
 
int main() {
     int numeroX;
     cin>>numeroX;
     if(numeroX >= 1 && numeroX <=1000) {
         for(int i = 1; i <= numeroX; i++) {
             if(i % 2 != 0) {
                 cout<< i <<endl;
             }
         }
     }
 
    return 0;
}