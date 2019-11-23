//
// Created by student on 21.11.2019.
//

#include "Small.h"
#include "BenchIncludes.h"
#include <unordered_set>

static void SmallBenchUnorderedMultisetEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.empty();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetEmpty)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchUnorderedMultisetSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.size();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchUnorderedMultisetMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.max_size();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetMaxSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchUnorderedMultisetClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

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
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetClear)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchUnorderedMultisetInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

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

        containerMultiSet.insert(s1);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetInsert)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchUnorderedMultisetErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

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
        containerMultiSet.erase(s1);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetErase)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchUnorderedMultisetSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    std::unordered_multiset<Small> containerMultiSet2;
    Small s1{};

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
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetSwap)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchUnorderedMultisetCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.count(s1);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetCount)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchUnorderedMultisetFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.find(s1);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetFind)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchUnorderedMultisetEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.equal_range(s1);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetEqualRange)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchUnorderedMultisetRehash(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.rehash(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetRehash)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchUnorderedMultisetReserve(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> containerMultiSet;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerMultiSet.insert(s1);
    }

    for( auto AAA : state )
    {
        containerMultiSet.reserve(N);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchUnorderedMultisetReserve)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();
