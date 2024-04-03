#include <iostream>
#include <string>

#include "easyfind.hpp"

int main( void ) {
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	std::cout << easyfind(v, 2) << std::endl;
	return 0;
}
