//
// Created by student on 27.11.2019.
//


#include "Large.h"
#include "BenchIncludes.h"
#include <map>

static void ReleaseLargeBenchMapAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};


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
BENCHMARK(ReleaseLargeBenchMapAt)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapEmpty)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapSize)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapMaxSize)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapClear)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{};
    Large s2{};

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
BENCHMARK(ReleaseLargeBenchMapInsert)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapErase)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    std::map<Large, Large> containerMap2;

    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapSwap)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapCount)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapFind)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapEqualRange)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchMapLowerBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapLowerBound)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchMapUpperBound(benchmark::State& state)
{
    auto N = state.range(0);
    std::map<Large, Large> containerMap;
    Large s1{}, s2{};

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
BENCHMARK(ReleaseLargeBenchMapUpperBound)->RangeMultiplier(2)->Range(1, 2)->Complexity();
