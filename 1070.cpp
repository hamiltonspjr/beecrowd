#include <iostream>
using namespace std;

int main() {
  int x, quantidadeNumerosImpares = 0;
  cin>>x;
  for(int i = x; i <= x + 12; i++) {
    if(i % 2 != 0 && quantidadeNumerosImpares < 6) {
      quantidadeNumerosImpares++;
      cout << i << endl;
    }
  }
  return 0;
}