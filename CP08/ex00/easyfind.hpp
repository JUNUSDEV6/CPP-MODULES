#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>

typename T::const_iterator easyfind(const T& container, int value);

#include "easyfind.tpp"

#endif