// Fayed


#define SYSCTL_RCGC2_R *((volatile unsigned long*) 0x400FE108)
#define GPIO_PORTF_DIR_R *((volatile unsigned long*) 0x40025400)
#define GPIO_PORTF_DEN_R *((volatile unsigned long*) 0x4002551C)	
#define GPIO_PORTF_DATA_R *((volatile unsigned long*) 0x400253FC)	

volatile unsigned long delay_count;
int main()
{
	// Enable the GPIO port:
	SYSCTL_RCGC2_R = 0X00000020;
	// delay for making sure GPIOF is up and running
	for(delay_count=0; delay_count<2000; delay_count++);
	// Set (PF3) the direction as output:
	GPIO_PORTF_DIR_R |= 1<<3;
	// Enable the GPIO pin:
	GPIO_PORTF_DEN_R |= 1<<3;
	
	while(1)	
	{
		GPIO_PORTF_DATA_R |= 1<<3; // PF3 ON
		for(delay_count=0; delay_count<200000; delay_count++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay_count=0; delay_count<200000; delay_count++);
	}

	return 0; 
}