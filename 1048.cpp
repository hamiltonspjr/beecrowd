#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double salario, valorReajusteGanho;
  int porcentagem = 0;
  cin>>salario;
  if(salario > 0 && salario <= 400.00) {
    valorReajusteGanho = salario * 0.15;
    porcentagem = 15;
  } else if(salario >= 400.01 && salario <= 800.00) {
    valorReajusteGanho = salario * 0.12;
    porcentagem = 12;
  } else if(salario >= 800.01 && salario <= 1200.00) {
    valorReajusteGanho = salario * 0.10;
    porcentagem = 10;
  } else if(salario >= 1200.01 && salario <= 2000.00) {
    valorReajusteGanho = salario * 0.07;
    porcentagem = 7;
  } else {
    valorReajusteGanho = salario * 0.04;
    porcentagem = 4;
  }
  cout << fixed << setprecision(2);
  cout << "Novo salario: " << salario + valorReajusteGanho << endl;
  cout << "Reajuste ganho: " << valorReajusteGanho << endl;
  cout << "Em percentual: " << porcentagem << " %" <<endl;
  return 0;
}