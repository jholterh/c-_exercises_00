#include "Fixed.hpp"

// Static member initialization
const int Fixed::_fract_bits = 8;

// Constructors

Fixed::Fixed() : _fp_value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;  // Uses the assignment operator
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

// Overloaded Operators

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();
	return *this;
}

// constructor for int that converts to fixed point representation

Fixed::Fixed(const int value)
{
	std::cout << "Int Constructor called" << std::endl;
	this->_fp_value = value << _fract_bits; // Shift left by number of fractional bits
}

// constructor for float that converts to fixed point representation
Fixed::Fixed(const float value)
{
	std::cout << "Float Constructor called" << std::endl;
	this->_fp_value = static_cast<int>(roundf(value * (1 << _fract_bits)));
}

// Public Methods

int Fixed::getRawBits(void) const
{
	return this->_fp_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fp_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_fp_value) / (1 << _fract_bits);
}

int Fixed::toInt(void) const
{
	return _fp_value >> _fract_bits; // Shift right by number of fractional bits
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
