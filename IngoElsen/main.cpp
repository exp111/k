#include <iostream>
#define ingo if
#define elsen else

int main()
{
	bool b = false;
	std::cin >> b;
	ingo(b)
	{
		std::cout << "ingo" << std::endl;
	}
	elsen
	{
		std::cout << "elsen" << std::endl;
	}
	std::system("PAUSE");
}