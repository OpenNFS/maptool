#include "utils.hpp"

size_t getLength(std::istream &stream)
{
    auto curPos = stream.tellg();

    stream.seekg(0, stream.end);

    auto pos = stream.tellg();

    stream.seekg(curPos, stream.beg);

    return (size_t) pos;
}

void printStreamPosition(std::istream &stream)
{
    printf("[debug] stream @ 0x%08lx (%lu)\n", (long) stream.tellg(), (long) stream.tellg());
}
