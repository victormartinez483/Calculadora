
#include <iostream>

using namespace std;

int soma(int a, int b);
int subtracao(int a, int b);

int main()
{
	int resultado_final;
	char operador;
	int primeiro_valor;
	int segundo_valor;

	cout << "Digite o primeiro valor:" << endl;
	cin >> primeiro_valor;
	cout << "Digite o operador:" << endl;
	cin >> operador;
	cout << "Digite o segundo valor:" << endl;
	cin >> segundo_valor;

	switch (operador)
	{
	case '+':
		resultado_final = soma(primeiro_valor, segundo_valor);
		break;

	case '-':
		resultado_final = subtracao(primeiro_valor, segundo_valor);
		break;
	}
	cout << "O resultado e: " << resultado_final << endl;

}

int soma(int a, int b)
{
	//Soma (+)
	int resultado;
	resultado = a + b;
	//cout << "Soma			| a + b = " << resultado << endl;
	return resultado;
}

int subtracao(int a, int b)
{
	//Subtracao (-)
	return a - b;
	//cout << "Subtracao			| a - b = " << resultado << endl;
}