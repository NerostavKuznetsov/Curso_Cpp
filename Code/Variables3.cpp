#include <iostream>
#include <iomanip>

int main()
{
	char c = 'A';

	std::cout << &c << std::endl;           // Tenta imprimir como string: provavelmente imprime "A" ou lixo aleatório = A╠╠╠╠%Aù¬©■´
	std::cout << (void*)&c << std::endl;    // Imprime corretamente o endereço da variável
	system("PAUSE");
}   

// std::cout << &c → trata & c como char*, ou seja, imprime como string → resultado imprevisível.
// std::cout << (void*)&c → força a impressão do endereço → uso correto para ver onde a variável está na memória.

// void = Nenhum tipo de dado
// = (Comando de atribuição) 

/*
✅ Explicação Técnica
Quando você faz:

cpp
Copiar
Editar
std::cout << &Caractere;
Você está passando um ponteiro para char (char*) para o std::cout.

E o que o std::cout entende quando recebe um char*?

🔸 Ele assume que aquilo é o início de uma string C (const char*) e tenta imprimir todos os caracteres até encontrar um '\0' (null terminator).

💥 Por que isso é um problema?
No seu caso, &Caractere é um ponteiro para um único caractere, e não necessariamente o início de uma string. Então o std::cout pode acabar lendo além da memória alocada e imprimindo lixo de memória, ou até causar comportamento indefinido.

✅ Solução: fazer um cast para (void*)
cpp
Copiar
Editar
std::cout << (void*)&Caractere;
Ao fazer o cast para void*, você está explicitamente dizendo ao std::cout:

"Não tente interpretar isso como uma string, só me mostre o endereço hexadecimal!"

Assim, ele imprime o endereço corretamente, como faz com int, float, bool, etc.

🧠 Resumo
std::cout << ponteiro para char → imprime como se fosse string (char*)

std::cout << (void*)ponteiro → imprime o endereço

Por isso só com char você precisa usar (void*) para evitar esse comportamento especial
*/

