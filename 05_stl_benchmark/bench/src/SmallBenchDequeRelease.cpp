//
// Created by student on 27.11.2019.
//

#include "Small.h"
#include "BenchIncludes.h"
#include <deque>


static void ReleaseSmallBenchDequeAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        auto random = rand()%N;
        DoNotOptimize(containerDeque.at(random));
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeAt)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchDequeOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        auto random = rand() % N;
        DoNotOptimize(containerDeque[random]);
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerDeque.front());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        DoNotOptimize(containerDeque.back());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }


    for( auto AAA : state )
    {
        DoNotOptimize(containerDeque.empty());
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchDequeSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.max_size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeMaxSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchDequeShrinkToFit(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        s1.randomize();
        containerDeque.push_front(s1);
        containerDeque.resize(N);
        containerDeque.clear();
        state.ResumeTiming();

        containerDeque.shrink_to_fit();

        ClobberMemory();
    }

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeShrinkToFit)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        for(long i = 0; i < N; i++)
        {
            s1.randomize();
            containerDeque.push_front(s1);
        }
        state.ResumeTiming();

        containerDeque.clear();
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.erase(containerDeque.begin() + N/2);
        state.ResumeTiming();

        DoNotOptimize(containerDeque.insert(containerDeque.begin() + N/2, s1));
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    auto iter = containerDeque.begin() + N / 2;

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.insert(iter, s1);
        state.ResumeTiming();

        DoNotOptimize(containerDeque.erase(iter));
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchDequePushBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.erase(containerDeque.begin());
        state.ResumeTiming();

        containerDeque.push_back(s1);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequePushBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequePopBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.push_back(s1);
        state.ResumeTiming();

        containerDeque.pop_back();
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequePopBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequePushFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.erase(containerDeque.end());
        state.ResumeTiming();

        containerDeque.push_front(s1);

        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequePushFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseSmallBenchDequePopFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        containerDeque.push_front(s1);
        state.ResumeTiming();

        containerDeque.pop_front();
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequePopFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseSmallBenchDequeResize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
    {
        state.PauseTiming();
        auto size = rand()%N;
        state.ResumeTiming();

        containerDeque.resize(size);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeResize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseSmallBenchDequeSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Small> containerDeque;
    std::deque<Small> containerDeque2;
    Small s1{};

    for(long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
        s1.randomize();
        containerDeque2.push_front(s1);
    }

    for( auto AAA : state )
    {
        containerDeque.swap(containerDeque2);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(ReleaseSmallBenchDequeSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();
