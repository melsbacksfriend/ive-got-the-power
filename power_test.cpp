#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "power.hpp"

TEST_CASE( "it computes the nth power of a number" ) {
    REQUIRE( naivePower(2, 0) == 1 );
    REQUIRE( naivePower(2, 1) == 2 );
    REQUIRE( naivePower(2, 2) == 4 );
    REQUIRE( naivePower(2, 3) == 8 );
    REQUIRE( naivePower(2, 4) == 16 );
    REQUIRE( naivePower(2, 5) == 32 );
    REQUIRE( naivePower(2, 6) == 64 );
    REQUIRE( naivePower(2, 7) == 128 );
    REQUIRE( naivePower(2, 8) == 256 );
    REQUIRE( naivePower(2, 9) == 512 );
    REQUIRE( naivePower(2, 10) == 1024 );
}

TEST_CASE("benchmarking the power functions") {

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            BENCHMARK("naivePower(" + std::to_string(i) + ", " + std::to_string(j) + ")") {
                naivePower(i, j);
            };
            BENCHMARK("unoptimizedDCPower(" + std::to_string(i) + ", " + std::to_string(j) + ")") {
                unoptimizedDCPower(i, j);
            };
            BENCHMARK("optimizedDCPower(" + std::to_string(i) + ", " + std::to_string(j) + ")") {
                optimizedDCPower(i, j);
            };
        }
    }
}