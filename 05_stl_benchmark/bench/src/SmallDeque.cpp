//
// Created by student on 21.11.2019.
//

#include "Small.h"
#include "BenchIncludes.h"
#include <deque>

static void SmallBenchDequeAt(benchmark::State& state)
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
        containerDeque.at(random);
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeAt)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchDequeOperatorSquareBracket(benchmark::State& state)
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
        containerDeque[random];
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeOperatorSquareBracket)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeFront(benchmark::State& state)
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
        containerDeque.front();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeFront)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeBack(benchmark::State& state)
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
        containerDeque.back();
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeBack)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


 static void SmallBenchDequeEmpty(benchmark::State& state)
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
         containerDeque.empty();
     }

     state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeEmpty)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchDequeSize(benchmark::State& state)
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
        containerDeque.size();

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchDequeMaxSize(benchmark::State& state)
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
        containerDeque.max_size();

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeMaxSize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();




static void SmallBenchDequeShrinkToFit(benchmark::State& state)
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
    }

    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeShrinkToFit)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeClear(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeClear)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeInsert(benchmark::State& state)
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

        containerDeque.insert(containerDeque.begin() + N/2, s1);
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeInsert)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeErase(benchmark::State& state)
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

        containerDeque.erase(iter);
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeErase)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchDequePushBack(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequePushBack)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequePopBack(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequePopBack)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequePushFront(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequePushFront)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();



static void SmallBenchDequePopFront(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequePopFront)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();


static void SmallBenchDequeResize(benchmark::State& state)
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
            auto size = rand();
        state.ResumeTiming();

       containerDeque.resize(size, s1);
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeResize)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();

static void SmallBenchDequeSwap(benchmark::State& state)
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
    }
    state.SetComplexityN(N);
}
BENCHMARK(SmallBenchDequeSwap)->RangeMultiplier(2)->Range(1, 1<<17)->Complexity();
