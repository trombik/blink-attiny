/*
 * Copyright (c) 2020 Tomoyuki Sakurai <y@trombik.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

void setup()
{
#if defined(ARDUINO_AVR_ATTINY13)
    /* run at 8 Mhz. by default, attiny13 runs at 1/8 clock, or 1 Mhz.
     * with this, you do not have to set fuse bits */
    CLKPR = _BV(CLKPCE);
    CLKPR = 0;
#endif
	pinMode(0, OUTPUT);
}
void loop()
{
	digitalWrite(0, HIGH);
	delay(1000);

	digitalWrite(0, LOW);
	delay(2000);
}
