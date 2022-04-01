#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <limits>
#include <string>
#include <cmath>

typedef struct Data {

		int i;
		unsigned int j;
		float f;
        char c;
        std::string string;

}				Data;

uintptr_t serialize(Data *ptr);
// * -> uintptr_T

Data* deserialize(uintptr_t raw);
// unsgined int -> *

void print_struct(Data *data);

#endif