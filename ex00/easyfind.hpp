#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>

void    easyfind( T& container, int value )
{
    if ( std::find( container.begin(), container.end(), value ) != container.end() )
    {
        std::cout << "Value found." << std::endl;
    }
    else
    {
        std::cout << "Value not found." << std::endl;
    }
}