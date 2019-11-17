#include "Large.h"
#include "BenchIncludes.h"

// TODO: Add benchmarks for operator<. operator==, and hash

static void LargeBenchLessOperator(benchmark::State& state)
{
    Large a{};
    Large b{};

    for(int i = 0; i < a.SIZE; i++ )
    {
        a.data[i] = 0;
        b.data[i] = 1;
    }

    for ( auto AAA : state )
        DoNotOptimize(a<b);

}
BENCHMARK(LargeBenchLessOperator);


static void LargeBenchEqualOperator(benchmark::State& state)
{
    Large a{};
    Large b{};

    for(int i = 0; i < a.SIZE; i++ )
    {
        a.data[i] = 0;
        b.data[i] = 0;
    }

    for ( auto AAA : state )
        DoNotOptimize(a==b);

}
BENCHMARK(LargeBenchEqualOperator);


static void LargeBenchHash(benchmark::State& state)
{
    Large a{};

    for(int i = 0; i < a.SIZE; i++ )
        a.data[i] = i;

    for ( auto AAA : state )
        DoNotOptimize(std::hash<Large>()(a));

}
BENCHMARK(LargeBenchHash);
