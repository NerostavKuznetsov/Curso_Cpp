#include <iostream>
#define PausarTexto "PAUSE"
#define PuleLinha "\n"
#define Retorne return

int main()
{
	typedef char caractere;
	caractere Letra = 'C';
	std::cout << "Primeiro Programa C++" << PuleLinha;
	system(PausarTexto);
	Retorne 0;
}