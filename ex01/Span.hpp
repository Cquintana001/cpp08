#pragma once

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span( void );

public:
    Span( unsigned int i);
    Span( const Span& obj);
    ~Span( void );

    Span&               operator=( const Span& rhs);
    void                addNumber( int d);
    void                addNumber( std::list<int>::const_iterator it_begin, std::list<int>::const_iterator it_end );
    unsigned int        longestSpan( void ) const;
    unsigned int        shortestSpan( void ) const;

    const std::list< int>*   getList( void ) const;
};

std::ostream& operator<<( std::ostream& stream, const Span& span );