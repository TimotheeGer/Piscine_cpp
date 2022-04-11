#include "Span.hpp"

Span::Span( unsigned int n ) : _n(n) {

	return ;
}

Span::Span( Span const &src ) {

	*this = src;
	return ;
}

Span::~Span ( void ) {

	return ;
}

Span &Span::operator=( Span const &rhs ) {


	return *this;
}

void Span::addNumber( int num ) {

	if (vec.size() == _n)
		throw Span::notFound();
	vec.push_back(num);
	return ;
}

int Span::shortestSpan( void ) {

	std::vector<int> tmp = vec;
	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notFound();
	sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();

	int small = *itb - (*itb + 1);

	while (itb != ite)
	{
		if (*itb - (*itb + 1) < small)
			small = *itb - (*itb + 1);
		itb++;
	}
	return small;
}

int Span::randomNumber( void ) {

	return (std::rand() % this->_n);
}

void Span::addRandomNumber(void) {

	vec.resize(_n);
	std::generate(vec.begin(), vec.end(), randomNumber);
}

int Span::longestSpan( void ) {

	int big;

	std::vector<int> tmp = vec;
	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notFound();
	sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();

	big = *itb - *ite;
	return big;
}
