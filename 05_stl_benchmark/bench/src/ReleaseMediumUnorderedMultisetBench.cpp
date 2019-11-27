//
// Created by student on 27.11.2019.
//


#include "Medium.h"
#include "BenchIncludes.h"
#include <unordered_set>

static void ReleaseMediumBenchUnorderedMultisetEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetEmpty)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseMediumBenchUnorderedMultisetSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetSize)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseMediumBenchUnorderedMultisetMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetMaxSize)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseMediumBenchUnorderedMultisetClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetClear)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseMediumBenchUnorderedMultisetInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetInsert)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseMediumBenchUnorderedMultisetErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetErase)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseMediumBenchUnorderedMultisetSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    std::unordered_multiset<Medium> containerMultiSet2;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetSwap)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseMediumBenchUnorderedMultisetCount(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetCount)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseMediumBenchUnorderedMultisetFind(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetFind)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseMediumBenchUnorderedMultisetEqualRange(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetEqualRange)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseMediumBenchUnorderedMultisetRehash(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetRehash)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseMediumBenchUnorderedMultisetReserve(benchmark::State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Medium> containerMultiSet;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchUnorderedMultisetReserve)->RangeMultiplier(2)->Range(1, 32)->Complexity();
