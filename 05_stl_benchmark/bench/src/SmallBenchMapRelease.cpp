//
// Created by student on 27.11.2019.
//


#include "Small.h"
#include "BenchIncludes.h"
#include <map>

static void ReleaseSmallBenchMapAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapAt)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapMaxSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{};
    Small s2{};

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
BENCHMARK(ReleaseSmallBenchMapInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    std::map<Small, Small> containerMap2;

    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapCount)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapFind)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapEqualRange)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchMapLowerBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapLowerBound)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchMapUpperBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Small, Small> containerMap;
    Small s1{}, s2{};

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
BENCHMARK(ReleaseSmallBenchMapUpperBound)->RangeMultiplier(2)->Range(1, 1024)->Complexity();
