#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth:<fayed>";

void main(void)
{
	uart_tx(string_buffer);
}