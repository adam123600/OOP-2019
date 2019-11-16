#include "Small.h"
#include "BenchIncludes.h"

// TODO: Add benchmarks for operator<. operator==, and hash

static void SmallBenchLessOperator(benchmark::State& state)
{
    Small a{};
    Small b{};



    for ( auto AAA : state )
    {
        auto result = a<b;

        DoNotOptimize(result);
    }

    state.SetComplexityN(state.range(0));
}

BENCHMARK(SmallBenchLessOperator)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();


static void SmallBenchEqualOperator(benchmark::State& state)
{
    Small a{};
    Small b{};

    for ( auto AAA : state )
    {
        auto result = a==b;
        DoNotOptimize(result);
    }
    state.SetComplexityN(state.range(0));
}

BENCHMARK(SmallBenchEqualOperator)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();


static void SmallBenchHash(benchmark::State& state)
{
    Small a{};

    for ( auto AAA : state )
    {
        auto result = std::hash<Small>()(a);
        DoNotOptimize(result);
    }

    state.SetComplexityN(state.range(0));
}

BENCHMARK(SmallBenchHash)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();