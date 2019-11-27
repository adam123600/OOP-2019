#include "Small.h"
#include "BenchIncludes.h"

// TODO: Add benchmarks for operator<. operator==, and hash


static void SmallBenchLessOperator(benchmark::State& state)
{
    Small a{};
    Small b{};

    a.data[0] = 0;
    b.data[0] = 1;


    for ( auto AAA : state )
        DoNotOptimize(a<b);
}
BENCHMARK(SmallBenchLessOperator);


static void SmallBenchEqualOperator(benchmark::State& state)
{
    Small a{};
    Small b{};

    a.data[0] = 0;
    b.data[0] = 0;

    for ( auto AAA : state )
        DoNotOptimize(a==b);

}
BENCHMARK(SmallBenchEqualOperator);


static void SmallBenchHash(benchmark::State& state)
{
    Small a{};
    a.data[0] = 0;

    for ( auto AAA : state )
        DoNotOptimize(std::hash<Small>()(a));

}
BENCHMARK(SmallBenchHash);

