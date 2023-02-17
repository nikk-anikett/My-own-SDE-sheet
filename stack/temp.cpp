#include <stdio.h>

#define FLAG 0x7E // Flag byte value
#define ESCAPE 0x7D // Escape byte value

// Function to stuff bits
void stuffBits(unsigned char* data, int* length) {
    int count = 0;
    for (int i = 0; i < *length; i++) {
        if (data[i] == FLAG || data[i] == ESCAPE) {
            count++;
        }
    }
    *length += count;

    for (int i = *length - 1; i >= 0; i--) {
        if (data[i - count] == FLAG || data[i - count] == ESCAPE) {
            data[i] = data[i - count];
            data[i - 1] = ESCAPE;
            count--;
        }
        else {
            data[i] = data[i - count];
        }
    }
}

int main() {
    unsigned char data[10] = {0x7E, 0x81, 0x82, 0x7D, 0x83, 0x84, 0x7E, 0x85, 0x86, 0x7E};
    int length = 10;

    printf("Original data: ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", data[i]);
    }

    stuffBits(data, &length);

    printf("\nStuffed data: ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", data[i]);
    }

    return 0;
}
