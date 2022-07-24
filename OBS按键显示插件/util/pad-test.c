/*
    Small program to test input from
    gamepads (and technically joysticks)
    compile with gcc -o pad-test pad-test.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Change this path to whatever your game pad is loaded as */
    const char* device = "/dev/input/js0";
    unsigned char packet[8];

    unsigned char key[4];   

    FILE *f = fopen(device, "wb+");

    if (!f)
    {
        printf("Cannot open device at %s\n", device);
        return -1;
    }
    
    // read away stuff at the beginning
    void *tmp = malloc(8*12*sizeof(char));
    fread(tmp, sizeof(char)*8*12, 1, f);
    free(tmp);
    
    while(1) {
        fread(&packet, sizeof(char)*8, 1, f);
        key[0] = packet[4];
        key[1] = packet[5];
        key[2] = packet[6];
        key[3] = packet[7];

        printf("STATE: %03d", key[0]);
		printf(" STATE: %03d", key[1]);
        printf(" TYPE : %03d", key[2]);
        printf(" KEY  : %03d", key[3]);
        printf("\n");

        usleep(10);
    }
    
    return 0;

}
