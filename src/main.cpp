#include <maincpp/math.hpp>

#include <fmt/format.h>

int main()
{
    fmt::print( "Hello from main.cpp project!\n" );
    fmt::print( "{} + {} = {}\n", 2, 2, maincpp::add( 2, 2 ) );
    fmt::print( "{} * {} = {}\n", 2, 3, maincpp::multiply( 2, 3 ) );
    return 0;
}