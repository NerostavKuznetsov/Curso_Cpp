#include <iostream>   
#include <limits>

int main()  
{  
	std::cout << "Tipo\t\t Minimo\t\t Maximo\n\n";

	// bool
	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';

	// int
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t' 
		<< +std::numeric_limits<int>::max() << '\n';

	// short int
	std::cout << "short int\t"
		<< +std::numeric_limits<short int>::min() << '\t' << '\t'
		<< +std::numeric_limits<short int>::max() << '\n';

	// long int = signed long int
	std::cout << "long int\t"
		<< +std::numeric_limits<long int>::min() << '\t' 
		<< +std::numeric_limits<long int>::max() << '\n';
	
	// unsigned int
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';

	// signed int
	std::cout << "signed int\t"
		<< +std::numeric_limits<signed int>::min() << '\t' 
		<< +std::numeric_limits<signed int>::max() << '\n';

	// unsigned long int
	std::cout << "unsigned long int\t"
		<< +std::numeric_limits<unsigned long int>::min() << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';

	// signed long int = long int
	std::cout << "signed long int\t"
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';

	// signed long long int = long long int
	std::cout << "signed long long int\t"
		<< +std::numeric_limits<signed long long int>::min() << '\t' 
		<< +std::numeric_limits<long long int>::max() << '\n';

	// unsigned long long int 
	std::cout << "unsigned long long int\t"
		<< +std::numeric_limits<unsigned long long int>::min() << '\t' 
		<< +std::numeric_limits<long long int>::max() << '\n';

	// long long int = signed long long int
	std::cout << "long long int\t"
		<< +std::numeric_limits<long long int>::min() << '\t' 
		<< +std::numeric_limits<long long int>::max() << '\n';
	
	// float 
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';

	system("PAUSE");  
	return 0;  
}



