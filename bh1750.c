#include <stdio.h>
#include <stdlib.h>
#include <shunyaInterfaces.h>
#include <Wire.h>
#include <bh1750.h>

int main()
{

	int lux = bh1750Read();
	printf("Light Intensity = %d lux", lux);

	return 0;
}
