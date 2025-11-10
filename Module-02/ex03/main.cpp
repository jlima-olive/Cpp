#include "Point.hpp"

int main( void ) {
Fixed a;
Point pa(Fixed(0), Fixed(0));
Point pb(Fixed(1), Fixed(0));
Point pc(Fixed(0), Fixed(1));
Point p(Fixed(0.5f), Fixed(0.6f));

// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;

std::cout << "Value is =" << bsp(pa, pb, pc, p) << std::endl;
return 0;
}