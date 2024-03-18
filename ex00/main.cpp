#include "easyfind.hpp"
#include <algorithm>

int main( int ac, char ** av )
{
    if ( ac != 2 )
    {
        std::cout << "Número de argumentos incorrecto." << std::endl;
        return 0;
    }

    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >      vect( arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::list< int >        list( arr, arr + sizeof(arr) / sizeof(arr[0]));

    easyfind< std::vector<int> >( vect, std::atoi( av[1] ));  // explicit instantiation
    easyfind< std::list<int> >( list, std::atoi( av[1] ));  // explicit instantiation

    return 1;
}