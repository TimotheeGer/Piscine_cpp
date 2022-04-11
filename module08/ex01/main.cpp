#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>

int main()
{

    std::vector<int> vec;

    std::cout << "vec = " << vec.empty() << std::endl << std::endl;


    std::cout << "vec = " << vec.size() << std::endl << std::endl;

    vec.resize(10);

    std::cout << "vec = " << vec.size() << std::endl << std::endl;

    vec.push_back(3);

    std::cout << "vec = " << vec.size() << std::endl << std::endl;

    vec.push_back(5);

    std::cout << "vec = " << vec.size() << std::endl << std::endl;
    
    
    return 0;
}