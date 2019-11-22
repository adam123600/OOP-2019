//
// Created by student on 21.11.2019.
//

#include "Small.h"
#include "BenchIncludes.h"
#include <map>

static void SmallBenchMapAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        auto random = rand() % N;
        containerMap.at(random);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapAt)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();




static void SmallBenchMapOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        auto random = rand() % N;
        containerMap[random];
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchMapEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.empty();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapEmpty)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.size();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.max_size();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapMaxSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.clear();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapClear)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.insert({N,s1});
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapInsert)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.erase(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapErase)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchMapSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    std::map<int, Small> containerMap2;

    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
        s1.randomize();
        containerMap2.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.swap(containerMap2);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapSwap)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.count(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapCount)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.find(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapFind)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchMapEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.equal_range(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapEqualRange)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchMapLowerBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.lower_bound(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapLowerBound)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchMapUpperBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<int, Small> containerMap;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMap.insert({i, s1});
    }

    for ( auto AAA : state )
    {
        containerMap.upper_bound(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchMapUpperBound)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();
