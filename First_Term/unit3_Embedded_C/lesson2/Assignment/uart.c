#include "stdint.h"
#include "Platform_Types.h"

#define UART0 *(vuint8_t*)((uint8_t*)0x101f1000)

void uart_tx(char* p_message)
{
	while(*p_message != '\0')
	{
		UART0 = (uint8_t)(*p_message);
		p_message++;
	}
}