#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"

int main()
{
    stdio_init_all();
    set_sys_clock_khz(200000, true);
    if (cyw43_arch_init()) {
        printf("Wi-Fi init failed\n");
        return -1;
    }
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    while (true) {
        printf("Hello, OpenCalc!\n");
        sleep_ms(1000);
    }
}