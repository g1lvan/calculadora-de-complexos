#include<iostream>

using namespace std;
char ASCII(int);

int main() {
	cout << "VAMOS TRABALHAR COM A TABELA ASCII" << endl;
	cout << "INSIRA UM NUEMRO: ";
	int numero;
	cin >> numero;
	cout << "O VALOR DE " << numero << " EM ASCII E " << ASCII(numero) << endl;
}
char ASCII(int num) {
	char caracter = num;
	return caracter;
}