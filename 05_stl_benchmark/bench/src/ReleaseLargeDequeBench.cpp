//
// Created by student on 27.11.2019.
//

#include "Large.h"
#include "BenchIncludes.h"
#include <deque>


static void ReleaseLargeBenchDequeAt(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;

    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeAt)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseLargeBenchDequeOperatorSquareBracket(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeFront)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeBack)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeEmpty(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeEmpty)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseLargeBenchDequeSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchDequeSize)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeMaxSize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

    for (long i = 0; i < N; i++)
    {
        s1.randomize();
        containerDeque.push_front(s1);
    }

    for( auto AAA : state )
        DoNotOptimize(containerDeque.max_size());

    state.SetComplexityN(N);
}
BENCHMARK(ReleaseLargeBenchDequeMaxSize)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseLargeBenchDequeShrinkToFit(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeShrinkToFit)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeClear(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeClear)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeInsert(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeInsert)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeErase(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeErase)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseLargeBenchDequePushBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequePushBack)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequePopBack(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequePopBack)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequePushFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequePushFront)->RangeMultiplier(2)->Range(1, 32)->Complexity();



static void ReleaseLargeBenchDequePopFront(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequePopFront)->RangeMultiplier(2)->Range(1, 32)->Complexity();


static void ReleaseLargeBenchDequeResize(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeResize)->RangeMultiplier(2)->Range(1, 32)->Complexity();

static void ReleaseLargeBenchDequeSwap(benchmark::State& state)
{
    auto N = state.range(0);
    std::deque<Large> containerDeque;
    std::deque<Large> containerDeque2;
    Large s1{};

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
BENCHMARK(ReleaseLargeBenchDequeSwap)->RangeMultiplier(2)->Range(1, 32)->Complexity();

