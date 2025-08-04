#include "Fixed.hpp"

// Static member initialization
const int Fixed::_fract_bits = 8;

// Constructors

Fixed::Fixed() : _fp_value(0) {}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;  // Uses the assignment operator
}

// Destructor

Fixed::~Fixed() {}

// Overloaded Operators

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->_fp_value = src.getRawBits();
	return *this;
}

// constructor for int that converts to fixed point representation

Fixed::Fixed(const int value)
{
	this->_fp_value = value << _fract_bits; // Shift left by number of fractional bits
}

// constructor for float that converts to fixed point representation
Fixed::Fixed(const float value)
{
	this->_fp_value = static_cast<int>(roundf(value * (1 << _fract_bits)));
}

// Public Methods

int Fixed::getRawBits(void) const
{
	return this->_fp_value;
}

void Fixed::setRawBits(int const raw)
{
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


// Comparison operators

bool Fixed::operator>(const Fixed &other) const
{
	return this->_fp_value > other._fp_value;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->_fp_value < other._fp_value;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->_fp_value >= other._fp_value;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->_fp_value <= other._fp_value;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_fp_value == other._fp_value;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_fp_value != other._fp_value;
}

// arithmetic operators


Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._fp_value = this->_fp_value + other._fp_value;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._fp_value = this->_fp_value - other._fp_value;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result._fp_value = (this->_fp_value * other._fp_value) >> _fract_bits;
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result._fp_value = (this->_fp_value << _fract_bits) / other._fp_value;
	return result;
}

// ++ and -- operators

Fixed &Fixed::operator++()
{
	this->_fp_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_fp_value++;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->_fp_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_fp_value--;
	return temp;
}

// min and max functions

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

