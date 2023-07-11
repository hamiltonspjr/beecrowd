#include <iostream>
using namespace std;

int main() {
  int valores[5], quantidadeValoresPares = 0, quantidadeValoresImpares = 0,
  quantidadeValoresPositivos = 0, quantidadeValoresNegativos = 0;
  for(int i = 0; i < 5; i++) {
    cin>>valores[i];
  }
  for(int i = 0; i < 5; i++) {
    if(valores[i] % 2 == 0) {
      quantidadeValoresPares++;
    } else {
      quantidadeValoresImpares++;
    }
    if(valores[i] > 0) {
      quantidadeValoresPositivos += 1;
    }else if(valores[i] < 0) {
      quantidadeValoresNegativos += 1;
    }
  }
  cout << quantidadeValoresPares << " valor(es) par(es)" <<endl;
  cout << quantidadeValoresImpares << " valor(es) impar(es)" <<endl;
  cout << quantidadeValoresPositivos << " valor(es) positivo(s)" <<endl;
  cout << quantidadeValoresNegativos << " valor(es) negativo(s)" <<endl;
  return 0;
}