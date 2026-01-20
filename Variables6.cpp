#include <iostream>  
#include <windows.h>  

using namespace std;  

int main()  
{  
	setlocale(LC_ALL, "PT_BR.UTF-8");

	// char
	cout << "Tamanho wchar_t: " << sizeof(wchar_t) << " Bytes" << "\n";
	cout << "Tamanho char: " << sizeof(char) << " Bytes" << "\n";
	cout << "Tamanho char16_t: " << sizeof(char16_t) << " Bytes" << "\n";
	cout << "Tamanho char32_t: " << sizeof(char32_t) << " Bytes" << "\n\n";

	// int
	cout << "Tamanho int: " << sizeof(int) << " Bytes" << "\n";
	cout << "Tamanho short int: " << sizeof(short int) << " Bytes" << "\n";
	cout << "Tamanho long int: " << sizeof(long int) << " Bytes" << "\n";
	cout << "Tamanho long long int: " << sizeof(long long int) << " Bytes" << "\n\n";

	// float
	cout << "Tamanho float: " << sizeof(float) << " Bytes" << "\n";
	cout << "Tamanho long float: " << sizeof(long float) << " Bytes" << "\n\n";

	// double
	cout << "Tamanho double: " << sizeof(double) << " Bytes" << "\n";
	cout << "Tamanho long double: " << sizeof(long double) << " Bytes" << "\n";

	system("PAUSE");  
	return 0;  
}
