#include <stdio.h>
#include <stdlib.h>

typedef struct ControlRegister {
    unsigned int enableDevice : 1; // Bit 0: Enable or disable the device
    unsigned int resetDevice : 1;  // Bit 1: reset the device
    unsigned int interruptEnabled : 1; // Bit 2: Enable or disable the interrupts
    unsigned int modeSelect : 2;   // Bits 3-4: Select operating mode
    unsigned int reserved : 27;    // Bits 5-31 Reserved for future use
}ControlRegister;

int main()
{
    // Declare a control register
    ControlRegister controlReg = {0};

    // Enable the device
    controlReg.enableDevice = 1;

    // Reset the device
    controlReg.resetDevice = 1;

    // Select operating mode 3
    controlReg.modeSelect = 3;

    // The size of ControlRegister should be 4 bytes (32 bits)
    printf("Size of control register is: %lu \n", sizeof(ControlRegister));

    return 0;
}
