#include <iostream>

namespace eixos
{
	int x;
	int y;
	int z;
}

int main(int argc, char* argv[])
{
	eixos::x = 666;
	eixos::y = 777;
	eixos::z = 888;
	
	std::cout << "X: " << eixos::x << std::endl;
	std::cout << "Y: " << eixos::y << std::endl;
	std::cout << "Z: " << eixos::z << std::endl;

	system("pause");
}