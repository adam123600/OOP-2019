//
// Created by student on 27.11.2019.
//

#include "Medium.h"
#include "BenchIncludes.h"
#include <deque>


static void ReleaseMediumBenchDequeAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;

    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeAt)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseMediumBenchDequeOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchDequeSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchDequeSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.max_size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseMediumBenchDequeMaxSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseMediumBenchDequeShrinkToFit(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeShrinkToFit)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchDequePushBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequePushBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequePopBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequePopBack)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequePushFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequePushFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();



static void ReleaseMediumBenchDequePopFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequePopFront)->RangeMultiplier(2)->Range(1, 1024)->Complexity();


static void ReleaseMediumBenchDequeResize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeResize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void ReleaseMediumBenchDequeSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Medium> containerDeque;
    std::deque<Medium> containerDeque2;
    Medium s1{};

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
BENCHMARK(ReleaseMediumBenchDequeSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

