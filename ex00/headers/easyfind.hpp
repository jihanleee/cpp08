#ifndef easyfind_HPP
# define easyfind_HPP
#include <typeinfo>
#include <vector>
#include <deque>
#include <list>

//not working
template <typename T>
int easyfind (T container, int integer) {
	size_t i;

	if (typeid(T) == typeid(std::vector<int>)) {
		for (i = 0; i < container.size(); i++) {
			if (container.at(i) == integer)
				return (i);
		}
	}
	return (-1);
}

#endif