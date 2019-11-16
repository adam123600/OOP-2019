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

    state.SetComplexityN(state.range(0));
}
BENCHMARK(LargeBenchLessOperator)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();


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

    state.SetComplexityN(state.range(0));
}
BENCHMARK(LargeBenchEqualOperator)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();


static void LargeBenchHash(benchmark::State& state)
{
    Large a{};

    for(int i = 0; i < a.SIZE; i++ )
        a.data[i] = i;

    for ( auto AAA : state )
        DoNotOptimize(std::hash<Large>()(a));

    state.SetComplexityN(state.range(0));
}
BENCHMARK(LargeBenchHash)->RangeMultiplier(2)->Range(1 << 5, 1 << 18)->Complexity();
