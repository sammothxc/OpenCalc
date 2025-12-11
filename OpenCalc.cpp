#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"

int main()
{
    stdio_init_all();
    set_sys_clock_khz(200000, true);
}