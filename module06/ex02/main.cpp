#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main ( void ) {

	Base *a = generate();
	Base &b = *a;

	identify(a);
	identify(b);

	return 0;
}
