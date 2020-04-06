#include <catch.hpp>

#include <maincpp/math.hpp>

TEST_CASE( "Addition is computed", "[add]" )
{
    REQUIRE( maincpp::add( 0, 0 ) == 0 );
    REQUIRE( maincpp::add( 0, 1 ) == 1 );
    REQUIRE( maincpp::add( 1, 0 ) == 1 );
    REQUIRE( maincpp::add( 1, 1 ) == 2 );
}

TEST_CASE( "Multiplication is computed", "[multiply]" )
{
    REQUIRE( maincpp::multiply( 0, 0 ) == 0 );
    REQUIRE( maincpp::multiply( 0, 1 ) == 0 );
    REQUIRE( maincpp::multiply( 1, 0 ) == 0 );
    REQUIRE( maincpp::multiply( 1, 1 ) == 1 );
    REQUIRE( maincpp::multiply( 2, 1 ) == 2 );
    REQUIRE( maincpp::multiply( 1, 2 ) == 2 );
    REQUIRE( maincpp::multiply( 2, 2 ) == 4 );
}