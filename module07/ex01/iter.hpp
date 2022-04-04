#ifndef ITER_HPP
#define ITER_HPP

template <typename T>

void iter(T &tab, T size, T (*fonction)(T)) {

	for (int i = 0 ; i < size ; i ++)
		fonction(tab[i]);
}


#endif