#include <iostream>
#include <iomanip>
#include <tchar.h> 

/*  C++
int = 4 Bytes
float = 4 Bytes
double = 8 Bytes
char = 1 Bytes
bool = 1 Bytes
*/

int main()
{
	_tsetlocale(LC_ALL, _T("PORTUGUESE")); // Posso usar -> setlocale(LC_ALL, "PT_BR.UTF-8");   

	int Numero = 45;
	float Numero2 = 55.56f;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool VF = true;
	bool VF2 = false;
	bool BF = 'k';
	bool BF2 = 0;   //  Se fosse bool BF2 = '0';   ia ser 1 pq é um (char)
	bool BF3 = '0';

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variável Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero << "\n\n";

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variável Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero2 << "\n\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl; // std::setprecision(12) = Quantidade de casas
	std::cout << "Tamanho da variável Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero3 << "\n\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da variável Caractere: " << sizeof(Caractere) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << (void*)&Caractere << "\n\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variável Caractere2: " << sizeof(Caractere2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << (void*)&Caractere2 << "\n\n"; // (void*) = Variables3.cpp obs: Apenas em 'char'

	std::cout << "Valor VF( 1 = true, 0 = false ): " << VF << std::endl;
	std::cout << "Tamaho da váriavel VF: " << sizeof(VF) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &VF << "\n\n";

	std::cout << "Valor VF2( 1 = true, 0 = false ): " << VF2 << std::endl;
	std::cout << "Tamaho da váriavel VF2: " << sizeof(VF2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &VF2 << "\n\n";

	std::cout << "Valor BF( 1 = true, 0 = false ): " << BF << std::endl;
	std::cout << "Tamaho da váriavel BF: " << sizeof(BF) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &BF << "\n\n";

	std::cout << "Valor BF2( 1 = true, 0 = false ): " << BF2 << std::endl;
	std::cout << "Tamaho da váriavel BF2: " << sizeof(BF2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &BF2 << "\n\n";

	std::cout << "Valor BF3( 1 = true, 0 = false ): " << BF3 << std::endl;
	std::cout << "Tamaho da váriavel BF3: " << sizeof(BF3) << " Bytes" << "\n";
	std::cout << "Endereço carregado na memória: " << &BF3 << "\n\n";


	system("PAUSE");
	return 0;
}