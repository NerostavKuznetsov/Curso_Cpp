#include <iostream>
#include <tchar.h>

/*
\t = Tabulação, deixa espaços.  (TAB)
*/
using namespace std;
int main()
{
	_tsetlocale(LC_ALL, _T("PORTUGUESE"));

	// Cria um local na memória com tipo inteiro (int) de nome NumComputadores e coloca neste local o valor 100 
	int NumComputadores;
	// Cria um local na memória com tipo inteiro (int) de nome NumComputadores e coloca neste local o valor 11111
	int SerialComputadores;

	NumComputadores = 100;
	SerialComputadores = 11111;

	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "\tValor da variável NumComputadores: " << NumComputadores << endl;
	cout << "\tValor da variável SerialComputadores: " << SerialComputadores << endl;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	system("PAUSE");
	return 0;
}