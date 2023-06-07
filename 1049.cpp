#include <iostream>
 
using namespace std;
 
int main() {
     string palavraUm, palavraDois, palavraTres;
     cin>>palavraUm;
     cin>>palavraDois;
     cin>>palavraTres;
     if(palavraUm == "vertebrado") {
         if(palavraDois == "ave") {
             if(palavraTres == "carnivoro") {
                 cout<< "aguia" <<endl;
             } else {
                 cout<< "pomba" <<endl;
             }
         } else {
             if(palavraTres == "onivoro") {
                 cout<<"homem"<<endl;
             } else {
                 cout<<"vaca"<<endl;
             }
         }
     } else if(palavraUm == "invertebrado") {
         if(palavraDois == "inseto") {
             if(palavraTres == "hematofago"){
                 cout<<"pulga"<<endl;
             } else {
                 cout<<"lagarta"<<endl;
             }
         } else {
             if(palavraTres == "hematofago") {
                 cout<<"sanguessuga"<<endl;
             } else {
                 cout<<"minhoca"<<endl;
             }
         }
     }
 
    return 0;
}