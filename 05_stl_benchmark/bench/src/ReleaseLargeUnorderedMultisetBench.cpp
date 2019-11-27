//
// Created by student on 27.11.2019.
//


#include "Large.h"
#include "BenchIncludes.h"
#include <unordered_set>

static void ReleaseLargeBenchUnorderedMultisetEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.empty());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetEmpty)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchUnorderedMultisetSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetSize)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchUnorderedMultisetMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.max_size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetMaxSize)->RangeMultiplier(2)->Range(1, 2)->Complexity();

static void ReleaseLargeBenchUnorderedMultisetClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        for(long i = 0; i < N; i++)
        {
            s1.randomize();
            containerMultiSet.insert(s1);
        }
        state.ResumeTiming();

        containerMultiSet.clear();
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetClear)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchUnorderedMultisetInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        containerMultiSet.erase(s1);
        state.ResumeTiming();

        DoNotOptimize(containerMultiSet.insert(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetInsert)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchUnorderedMultisetErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerMultiSet.insert(s1);
        state.ResumeTiming();

        DoNotOptimize(containerMultiSet.erase(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetErase)->RangeMultiplier(2)->Range(1, 2)->Complexity();

static void ReleaseLargeBenchUnorderedMultisetSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    std::unordered_multiset<Large> containerMultiSet2;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
        s1.randomize();
        containerMultiSet2.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.swap(containerMultiSet2);
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetSwap)->RangeMultiplier(2)->Range(1, 2)->Complexity();

static void ReleaseLargeBenchUnorderedMultisetCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.count(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetCount)->RangeMultiplier(2)->Range(1, 2)->Complexity();

static void ReleaseLargeBenchUnorderedMultisetFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.find(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetFind)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchUnorderedMultisetEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerMultiSet.equal_range(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetEqualRange)->RangeMultiplier(2)->Range(1, 2)->Complexity();



static void ReleaseLargeBenchUnorderedMultisetRehash(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.rehash(N);
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetRehash)->RangeMultiplier(2)->Range(1, 2)->Complexity();


static void ReleaseLargeBenchUnorderedMultisetReserve(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Large> containerMultiSet;
    Large s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.reserve(N);
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchUnorderedMultisetReserve)->RangeMultiplier(2)->Range(1, 2)->Complexity();
