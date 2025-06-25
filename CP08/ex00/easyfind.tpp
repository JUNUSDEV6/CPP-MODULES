#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template <typename T>
typename    T::const_iterator   easyfind(const T& container, int value){
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("error not find in container");
    return it;
}

#endif