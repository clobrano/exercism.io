#include <stdio.h>
#include "gigasecond.h"

time_t gigasecond_after(time_t t)
{
    return t + 1e9;
}
