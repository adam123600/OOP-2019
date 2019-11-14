#pragma once

#include <random>

struct Large {

    constexpr static unsigned SIZE = 128u*1024u;

    double data[SIZE];

    void clear() {
        std::fill_n(data, SIZE, 0);
    }

    void randomize() {
        static std::random_device rd{};
        static std::mt19937 gen{rd()};
        static std::uniform_real_distribution<> dis{};

        for (double &i : data) {
            i = dis(gen);
        }
    }

    bool operator<(const Large &rhs) const {

        // TODO: Implement me!

        const double EPS = 0.0000000000000000000000000000001;  // dokladnosc
        int i = 0;

        while( i < SIZE )
        {
            if ( (this->data[i] - rhs.data[i]) > EPS )
                return false;
            i++;
        }
        return true;
    }

    bool operator==(const Large &rhs) const {

        // TODO: Implement me!
        return true;
    }
};

namespace std {
    template<>
    struct hash<Large> {
        std::size_t operator()(const Large &d) const {

            // TODO: Implement me!
            return 0;
        }
    };
}
