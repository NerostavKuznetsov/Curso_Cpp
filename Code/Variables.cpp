#include <iostream>	
#include <tchar.h>

using namespace std;
int main()
{
	_tsetlocale(LC_ALL, _T("PORTUGUESE")); // Coloca acentuação as palavras portuguesas

	int Vida = 5;
	/*
	Acima o computador irá alocar um espaço na memória do tipo inteiro e depois
	vai até esse local na RAM e vai colocar o valor 5 
	010FFDC8 = 5
	*/

	int Pontuacao = 1350;
	/*
	Acima o computador irá alocar um espaço na memória do tipo inteiro e depois
	vai até esse local na RAM e vai colocar o valor 1350
	010FFDBC = 1350
	*/
	

	cout << "========================================================================" << endl;
	cout << "Vida: " << Vida << endl;
	cout << "Pontuação: " << Pontuacao << endl;
	cout << "Tamanho da variável Vida: " << sizeof(Vida) << "Bytes" << "\n";
	cout << "Tamanho da variável Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n"; 
	cout << "Endereço que 'Vida' ocupa na memória RAM: " << &Vida << endl;
	cout << "Endereço que 'Score' ocupa na memória RAM: " << &Pontuacao << endl;
	cout << "========================================================================" << endl;



	cout << "================================== Durante o jogo ======================================" << endl;
	/*
	Vá até a região de memória rotulada com o nome 'Pontuacao' e coloque 
	agora em soma o valor que está contido nela + 150
	Pontuacao = 1350 + 150;
	Pontuacao = 1500;
	*/
	Pontuacao = Pontuacao + 150;
	/*
	Vá até a região de memória rotulada com o nome 'Vida' coloque
	agora em subtração o valor que está contido nela + 150
	Vida = 5 - 1;
	Vida = 4;
	*/
	Vida = Vida - 1;
	cout << "Vida: " << Vida << endl;
	cout << "Pontuação: " << Pontuacao << endl;
	cout << "========================================================================" << endl;

	system("PAUSE");
}



