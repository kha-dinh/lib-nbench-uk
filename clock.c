#include "clock.h"

#include <uk/plat/time.h>

clock_t uk_clock()
{
	return ukplat_monotonic_clock() / 1000;
}
