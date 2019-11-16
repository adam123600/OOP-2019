#pragma once

#include <random>

struct Medium {

    constexpr static unsigned SIZE = 256u;
    int data[SIZE];

    void clear() {
        std::fill_n(data, SIZE, 0);
    }

    void randomize() {
        static std::random_device rd{};
        static std::mt19937 gen{rd()};
        static std::uniform_int_distribution<int> dis{};

        for (int &i : data)
            i = dis(gen);
    }

    bool operator<(const Medium &rhs) const {

        // TODO: Implement me!

        int i = 0;

        while( i++ < SIZE )
        {
            if ( this->data[i] < rhs.data[i] )
                continue;
            else
                return false;
        }
       return true;
    }

    bool operator==(const Medium &rhs) const {

        // TODO: Implement me!

        int i = 0;

        while(i < SIZE )
        {
            if( this->data[i] != rhs.data[i] )
                return false;
            i++;
        }
        return true;
    }
};

namespace std {
    template<>
    struct hash<Medium> {
        std::size_t operator()(const Medium &d) const {

            // TODO: Implement me!

            int result = 0;

            for(int i = 0; i < d.SIZE; i++)
            {
                result += 69*(((i+1)*69)/49)*d.data[i];
            }

            printf("RESULT %d:", result);

            return result;
        }
    };
}