#include "Fixed.hpp"

// Static member initialization
const int Fixed::_fract_bits = 8;

// Constructors

Fixed::Fixed() : _fp_value(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;  // Uses the assignment operator
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

// Overloaded Operators

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();
	return *this;
}

// Public Methods

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fp_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fp_value = raw;
}
