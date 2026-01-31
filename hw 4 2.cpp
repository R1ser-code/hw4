#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Enter first number:";
	std::cin >> a;
	std::cout << "Enter second number:";
	std::cin >> b;
	std::cout << "Enter third number:";
	std::cin >> c;
	if (a >= b && a >= c)
	{
		if (b >= c)
			std::cout << a << "" << b << "" << c;
		else
			std::cout << a << "" << c << "" << b;

	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
			std::cout << b << "" << a << "" << c;
		else
			std::cout << b << "" << c << "" << a;
	}
	else
	{
		if (a >= b)
			std::cout << c << "" << a << "" << b;
		else
			std::cout << c << "" << b << "" << a;
	}
	return EXIT_SUCCESS;
}