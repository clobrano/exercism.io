#include <ctype.h>
#include "isogram.h"


bool is_isogram(const char phrase[])
{
    unsigned int bitmask = 0;

    if (!phrase)
        return false;

    while(*phrase) {
        char c = tolower(*phrase++);

        if (!isalpha(c))
            continue;
 
        c -= 'a';
        if (bitmask & (1 << c))
            return false;

        bitmask |= (1 << c);
    }

    return true;
}
