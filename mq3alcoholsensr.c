#include <stdlib.h>
#include <stdio.h>
#include <shunyaInterfaces.h>
#include <Wire.h>
#include <pcf8591.h>

int main(void)
{
        shunyaInterfacesSetup();
        pcf8591Setup();
        while (1) { 
                int value;
                value = pcf8591Read(A1);
                printf("The alcohol value is BAC %d\n",value);
        }
        return 0;
}

