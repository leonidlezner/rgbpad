#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;

    setup_default_uart();
    stdio_init_all();

    sleep_ms(500);

    puts("Starting application...");

    #ifdef DEBUG
    puts("Debug");
    #else
    puts("Release");
    #endif
    
    gpio_init(LED_PIN);

    gpio_set_dir(LED_PIN, GPIO_OUT);

    int i = 0;

    while (true)
    {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);

        printf("i = %d\n", i);

        i += 2;

        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }
}