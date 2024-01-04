#include <stdio.h>

int main(){
    /*
    int x, y; // 8 bytes
    x = 1;
    y = 0;

    if (x==1){
        printf("1st feature is enabled\n");
    }

    if (y==1){
        printf("2nd feature is enabled\n");
    }
    */
    unsigned int flags = 0b1 | 0b10 | 0b10000000;
    // 01 = 1
    // 10 = 2
    // 10000000 = 3

    /*
    00000000 00000000 00000000 00000001
    00000000 00000000 00000000 00000010 |
    00000000 00000000 00000000 10000000 |
                               10000011
    */


    /*
    00000000 00000000 00000000 10000011
    00000000 00000000 00000000 10000000 &
                               10000000
    
    */

    // 1 0 = 1
    // 0 1 = 1
    // 0 0 = 0
    // 1 1 = 1

    if ((flags & 0b1) != 0){
        printf("1st feature is enabled\n");
        // checks if the last digit is one or not
        /*
        00000000 00000000 00000000 10000011 
        00000000 00000000 00000000 00000001 &
                                   00000001 = true
        */
        }
    if ((flags & 0b10) != 0){ 
        // checks if the 2nd last digit is one or not
        /*
        00000000 00000000 00000000 10000011 
        00000000 00000000 00000000 00000010 &
                                   00000010 = true
        */
        printf("2nd feature is enabled\n");
        }

    if ((flags & 0b10000000) != 0){ 
        // checks if the 3rd last digit is one or not
        /*
        00000000 00000000 00000000 10000011 
        00000000 00000000 00000000 10000000 &
                                   10000000 = true
        */
        printf("3rd feature is enabled\n");
        }
    
    return 0;
}

// insight from CodeVault on youtube.