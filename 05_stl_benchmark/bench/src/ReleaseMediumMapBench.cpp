//
// Created by student on 27.11.2019.
//


#include "Medium.h"
#include "BenchIncludes.h"
#include <map>

static void ReleaseMediumBenchMapAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};


    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.at(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapAt)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap[s1]);
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.empty());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.max_size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapMaxSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        for(long i = 0; i < N; i++)
        {
            s1.randomize();
            s2.randomize();
            containerMap.insert({s1, s2});
        }
        state.ResumeTiming();

        containerMap.clear();
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{};
    Medium s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        s2.randomize();
        containerMap.erase(s1);
        state.ResumeTiming();

        DoNotOptimize(containerMap.insert({s1,s2}));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        containerMap.insert({s1, s2});
        s2.randomize();
        state.ResumeTiming();

        DoNotOptimize(containerMap.erase(s2));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    std::map<Medium, Medium> containerMap2;

    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
        s1.randomize();
        s2.randomize();
        containerMap2.insert({s2, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.swap(containerMap2);
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        state.ResumeTiming();

        DoNotOptimize(containerMap.count(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapCount)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        state.ResumeTiming();

        DoNotOptimize(containerMap.find(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapFind)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        state.ResumeTiming();

        DoNotOptimize(containerMap.equal_range(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapEqualRange)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchMapLowerBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.lower_bound(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapLowerBound)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchMapUpperBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Medium, Medium> containerMap;
    Medium s1{}, s2{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        s2.randomize();
        containerMap.insert({s1, s2});
    }

    for ( auto AAA : state )
    {
        DoNotOptimize(containerMap.upper_bound(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchMapUpperBound)->RangeMultiplier(2)->Range(1, 1024)->Complexity();
