#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

     float N1,N2,N3,N4, media;
     cin >>N1>>N2>>N3>>N4;
     media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4)/10;
     cout << fixed << setprecision(1);
     cout << "Media: " << media <<endl;
     if(media >= 7.0) {
         cout << "Aluno aprovado." <<endl;
     } else if(media >= 5.0 && media <= 6.9) {
         cout << "Aluno em exame." <<endl;
         float notaExame;
         cin >> notaExame;
         cout << "Nota do exame: " << notaExame << endl;
         media = (media + notaExame)/2;
         if(media >= 5.0) {
            cout << "Aluno aprovado." <<endl;
         } else {
             cout << "Aluno reprovado." <<endl;
         }
         cout << "Media final: " << media <<endl;
     } else {
         cout << "Aluno reprovado." <<endl;
     }
 
    return 0;
}