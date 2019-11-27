//
// Created by student on 27.11.2019.
//


#include "Small.h"
#include "BenchIncludes.h"
#include <unordered_set>

static void ReleaseSmallBenchUnorderedMultisetEmpty(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.empty());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchUnorderedMultisetSize(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchUnorderedMultisetMaxSize(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.max_size());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetMaxSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchUnorderedMultisetClear(benchmark::State& state)
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
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchUnorderedMultisetInsert(benchmark::State& state)
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

        DoNotOptimize(containerMultiSet.insert(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchUnorderedMultisetErase(benchmark::State& state)
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

        DoNotOptimize(containerMultiSet.erase(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchUnorderedMultisetSwap(benchmark::State& state)
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
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchUnorderedMultisetCount(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.count(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetCount)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchUnorderedMultisetFind(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.find(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetFind)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchUnorderedMultisetEqualRange(benchmark::State& state)
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
        DoNotOptimize(containerMultiSet.equal_range(s1));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetEqualRange)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchUnorderedMultisetRehash(benchmark::State& state)
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
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetRehash)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchUnorderedMultisetReserve(benchmark::State& state)
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
        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchUnorderedMultisetReserve)->RangeMultiplier(2)->Range(1, 1024)->Complexity();
