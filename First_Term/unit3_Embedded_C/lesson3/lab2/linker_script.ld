/* linker script CortexM3
Eng.Keroles
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS
{
	.text : 
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = .;
	}> flash

	.data : 
	{
		_S_DATA = .;
		*(.data)
		. = ALIGN(4);
		_E_DATA = .;
	}> sram AT> flash

	.bss : 
	{
		_S_bss = .;
		*(.bss)
		. = ALIGN(4);
		_E_bss = .; 

		. = . + 0x1000;
		_stack_top = .;
	}> sram
}