#include "tupel.h"

template <typename T1, typename T2>
int vergleiche(Tupel<T1, T2> x, Tupel<T1, T2> y)
{
    if (x.komponente1 > y.komponente1 && x.komponente2 > y.komponente2)
    {
        return 1;
    }
    else if (x.komponente1 < y.komponente1 && x.komponente2 < y.komponente2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

template int vergleiche<std::string, int>(Tupel<std::string, int> x, Tupel<std::string, int> y);
template int vergleiche<int, int>(Tupel<int, int> x, Tupel<int, int> y);