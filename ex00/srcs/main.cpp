#include <iostream>
#include <string>
#include <queue>
#include "easyfind.hpp"

int main( void ) {
	std::queue<int> q = {0, 1, 2, 3};

	std::cout << easyfind(q, 2) << std::endl;
	return 0;
}