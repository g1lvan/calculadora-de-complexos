/* CALCULADORA DE NÚMEROS COMPLEXOS COM STUCT
   DATA: 02/12/2023 VERSÃO 1.0*/

#include<iostream>
using namespace std;

struct complexo {
	float real;
	float imaginario;
};

complexo soma(complexo, complexo);
complexo sub(complexo, complexo);
complexo mult(complexo, complexo);
complexo div(complexo, complexo);

complexo ler();
void exibir(complexo);

int main() {
	setlocale(LC_ALL, "portuguese");
	cout << "CALCULADORA DE NUMEROS COMPLEXOS C++\n";
	complexo resposta;
	complexo num1;
	complexo num2;
	char operador;

	bool k = false;
	while (k == false) {
		cout << "DIGITE A OPERAÇÃO ( +, -, *, / ) : ";
		cin >> operador;
		switch (operador) {
		case '+':
			cout << "\nDIGITE DOIS NÚMEROS COMPLEXOS PARA SOMAR:\n";
			num1 = ler();
			num2 = ler();
			resposta = soma(num1, num2);
			exibir(resposta);
			break;

		case '-':
			cout << "\nDIGITE DOIS NÚMEROS COMPLEXOS PARA SUBTRAIR:\n";
			num1 = ler();
			num2 = ler();
			resposta = sub(num1, num2);
			exibir(resposta);
			break;

		case '*':
			cout << "\nDIGITE DOIS NÚMEROS COMPLEXOS PARA MULTIPLICAR:\n";
			num1 = ler();
			num2 = ler();
			resposta = mult(num1, num2);
			exibir(resposta);
			break;

		case '/':
			cout << "\nDIGITE DOIS NÚMEROS COMPLEXOS PARA DIVIDIR:\n";
			num1 = ler();
			num2 = ler();
			resposta = div(num1, num2);
			exibir(resposta);
			break;

		default:
			cout << "OPERADOR DESCONHECIDO!!" << endl;
			continue;
		}
		cout << "\nDESEJA CONTINUAR (0 PARA SIM E 1 PARA NÃO)?";
		cin >> k;
	}
}

complexo ler() {
	complexo temp;
	cin >> temp.real;
	cin >> temp.imaginario;
	cin.ignore();
	return temp;
}
void exibir(complexo a) {
	cout << "RESULTADO: ";
	cout << a.real;
	cout << showpos;
	cout << a.imaginario;
	cout << noshowpos;
	cout << "i" << endl;
}

complexo soma(complexo a, complexo b) {
	complexo c;
	c.real = a.real + b.real;
	c.imaginario = a.imaginario + b.imaginario;
	return c;
}

complexo sub(complexo a, complexo b) {
	complexo c;
	c.real = a.real - b.real;
	c.imaginario = a.imaginario - b.imaginario;
	return c;
}

complexo mult(complexo a, complexo b) {
	complexo c;
	c.real = (a.real * b.real) + ((a.imaginario * b.imaginario)*(-1));
	c.imaginario = (a.real * b.imaginario) + (a.imaginario * b.real);
	return c;
}

complexo div(complexo a, complexo b) {
	complexo c;
	float divisor = b.real * b.real + b.imaginario * b.imaginario;
	c.real = (a.real * b.real + a.imaginario * b.imaginario) / divisor;
	c.imaginario = (a.imaginario * b.real - a.real * b.imaginario) / divisor;
	return c;
}