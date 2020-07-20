#include <iostream>
#include "Fixed.class.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c = Fixed(100.422f);
	Fixed d = Fixed(10.10f);
	std::cout << c << " - " << d << " = " << (c - d) << std::endl;
	std::cout << c << " + " << d << " = " << (c + d) << std::endl;
	std::cout << c << " * " << d << " = " << (c * d) << std::endl;
	std::cout << c << " / " << d << " = " << (c / d) << std::endl;
	std::cout << c << " > " << d << " = " << (c > d) << std::endl;
	std::cout << c << " < " << d << " = " << (c < d) << std::endl;
	std::cout << c << " <= " << d << " = " << (c <= d) << std::endl;
	Fixed e = Fixed(5);
	std::cout << c << " >= " << e << " = " << (c >= e) << std::endl;
	std::cout << c << " == " << e << " = " << (c == e) << std::endl;
	std::cout << c << " != " << e << " = " << (c != e) << std::endl;
	return (0);
}
