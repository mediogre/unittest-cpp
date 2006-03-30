#ifndef UNITTEST_BUILDFAILURESTRING_H
#define UNITTEST_BUILDFAILURESTRING_H

#include "Config.h"
#include "MemoryOutStream.h"

namespace UnitTest {


template< typename Expected, typename Actual, typename Tolerance >
void BuildFailureString(MemoryOutStream& stream, Expected const expected, Actual const actual,
                                int const count, Tolerance const tolerance)
{
    stream << "Expected [ ";

    for (int i = 0; i < count; ++i)
        stream << expected[i] << " ";

    stream << "] +/- " << tolerance << " but was [ ";

    for (int i = 0; i < count; ++i)
        stream << actual[i] << " ";

    stream << "]";
}

}

#endif
