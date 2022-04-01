#include "Data.hpp"

void print_struct(Data *data)
{
    std::cout << "int = " << data->i << std::endl;
    std::cout << "unsigned int = " << data->j << std::endl;
	std::cout << "float = " << data->f << std::endl;
	std::cout << "char = " << data->c << std::endl;
	std::cout << "string = " << data->string << std::endl;
}

int main(void) {

    Data *data = new(Data);
    Data *deserialize_p;
    uintptr_t serialize_uintptr;

	data->i = 42;
	data->j = 420000000;
	data->f = 42.42;
	data->c = 'c';
	data->string = "Hello world";

	std::cout << "-----------------Data base-----------------------------" << std::endl << std::endl;

	std::cout << "data = " << data << std::endl;
	print_struct(data);

	std::cout << "-----------------Data Serialize------------------------" << std::endl << std::endl;

	serialize_uintptr = serialize(data);
	std::cout << " serialize = " << serialize_uintptr << std::endl;

	std::cout << "-----------------Data deserialize----------------------" << std::endl << std::endl;

	deserialize_p = deserialize(serialize_uintptr);
	std::cout << "deserialize = " << deserialize_p << std::endl;
	print_struct(data);

	delete data;
    return 0;
}