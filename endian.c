#include <stdio.h>

void endian()
{
	int userInput;
        unsigned int input;
	unsigned int byte0;
	unsigned int byte1;
	unsigned int byte2;
	unsigned int byte3;
	unsigned int result;//Input after endian swap

	printf("Enter a 32-bit number (>=1 and <=4294967295, inclusively): ");
	scanf("%u", &userInput);

	while (userInput <1 || userInput >4294967295)
	{
		printf("Enter a 32-bit number (>=1 and <=4294967295, inclusively): ");
		scanf("%u", &userInput);
	}

	input = userInput;


	//Puts each byte of input into an 8-bit integer
	byte0 = input & 0xFF;
	byte1 = (input >> 8) & 0xFF;
	byte2 = (input >> 16) & 0xFF;
	byte3 = (input >> 24) & 0xFF;

	//printf("byte0 %i byte1 %i byte2 %i byte3 %i\n", byte0, byte1, byte2, byte3);

	//Performs endian swap
	result = (byte0 << 24) + (byte1 << 16) + (byte2 << 8) + byte3;

	printf("Endian swap of %u gives: %u\n", input, result);
}


int main()//temp main function
{
	endian();
	return 0;
}

