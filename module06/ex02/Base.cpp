#include "Base.hpp"

Base::Base(void) {

    return ;
};

Base *generate(void) {

    srand (time(NULL));
    int random = rand() % 3;

    switch (random)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
        default:
            return (NULL);
    }
    return (NULL);
};


void identify(Base* p) {

	Base *a;
	a = dynamic_cast<A*>(p);
    if (a)
		std::cout << "A success" << std::endl;

	a = dynamic_cast<B*>(p);
    if (a)
		std::cout << "B success" << std::endl;

	a = dynamic_cast<C*>(p);
    if (a)
		std::cout << "C success" << std::endl;
}


void identify(Base& p) {

	try {
		Base &test= dynamic_cast<A &>(p);
		std::cout << "Conversion is ok" << std::endl;
	}
	catch ( std::bad_cast &bc) {

		std::cout << "Bad conversion" << bc.what() << std::endl;
	}

	try {
		Base &test= dynamic_cast<B &>(p);
		std::cout << "Conversion is ok" << std::endl;
	}
	catch ( std::bad_cast &bc) {

		std::cout << "Bad conversion" << bc.what() << std::endl;
	}

	try {
		Base &test= dynamic_cast<C &>(p);
		std::cout << "Conversion is ok" << std::endl;
	}
	catch ( std::bad_cast &bc) {

		std::cout << "Bad conversion" << bc.what() << std::endl;
	}
}
