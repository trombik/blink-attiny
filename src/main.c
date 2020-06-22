#include <avr/io.h>
#include <util/delay.h>

#define LED_PORT PB0

int main(void)
{
#if defined(ARDUINO_AVR_ATTINY13)
    /* run at 8 Mhz. by default, attiny13 runs at 1/8 clock, or 1 Mhz.
     * with this, you do not have to set fuse bits */
    CLKPR = _BV(CLKPCE);
    CLKPR = 0;
#endif
    DDRB |= (1 << LED_PORT);
    while (1) {
        PORTB |= (1 << LED_PORT);
        _delay_ms(1000);
        PORTB &= ~(1 << LED_PORT);
        _delay_ms(2000);
    }
}
