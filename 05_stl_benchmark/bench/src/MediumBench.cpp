#include "Medium.h"
#include "BenchIncludes.h"

// TODO: Add benchmarks for operator<. operator==, and hash

/*
static void MediumBenchLessOperator(benchmark::State& state)
{
    Medium a{};
    Medium b{};

    for(int i = 0; i < a.SIZE; i++ )
    {
        a.data[i] = 0;
        b.data[i] = 1;
    }

    for( auto AAA : state )
        DoNotOptimize(a<b);
}
BENCHMARK(MediumBenchLessOperator);

static void MediumBenchEqualOperator(benchmark::State& state)
{
    Medium a{};
    Medium b{};

    for(int i = 0; i < a.SIZE; i++)
    {
        a.data[i] = 0;
        b.data[i] = 0;
    }

    for( auto AAA : state )
        DoNotOptimize(a==b);

}
BENCHMARK(MediumBenchEqualOperator);

static void MediumBenchHash(benchmark::State& state)
{
    Medium a{};

    for(int i = 0; i < a.SIZE; i++ )
        a.data[i] = i;

    for ( auto AAA : state )
        DoNotOptimize(std::hash<Medium>()(a));

}
BENCHMARK(MediumBenchHash);

 */