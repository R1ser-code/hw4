#include <iostream>

int main()
{
	std::cout << std::boolalpha;
	bool a, b;
	std::cout << "Operator: ||" << std::endl;
	a = true, b = true;
	std::cout << a << "\t" << b << "\t" << (a || b) << std::endl;
	a = false, b = true;
	std::cout << a << "\t" << b << "\t" << (a || b) << std::endl;
	a = true, b = false;
	std::cout << a << "\t" << b << "\t" << (a || b) << std::endl;
	a = false, b = false;
	std::cout << a << "\t" << b << "\t" << (a || b) << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Operator: &&" << std::endl;
	a = true, b = true;
	std::cout << a << "\t" << b << "\t" << (a && b) << std::endl;
	a = false, b = true;
	std::cout << a << "\t" << b << "\t" << (a && b) << std::endl;
	a = true, b = false;
	std::cout << a << "\t" << b << "\t" << (a && b) << std::endl;
	a = false, b = false;
	std::cout << a << "\t" << b << "\t" << (a && b) << std::endl;

	return EXIT_SUCCESS;
}