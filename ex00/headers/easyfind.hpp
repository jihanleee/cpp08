#ifndef easyfind_HPP
# define easyfind_HPP

//not working
template <typename T>
int easyfind (T container, int integer) {
	size_t i;

	for (i = 0; i < container.size(); i++) {
		if (container.at(i) == integer)
			return (i);
	}
	return (-1);
}

#endif