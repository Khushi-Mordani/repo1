#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void reverseBits(unsigned int n){
    unsigned int bits[32];
    for(int i=0; i<32; i++){
        bits[i] = n & 1;
        n>>=1;
    }
   
    int max_bit_position = 31;
    while(bits[max_bit_position]==0){
        max_bit_position--;
    }
   
    printf("Before:");
    for(int i=max_bit_position; i>=0; i--){
        printf("%d",bits[i]);
    }
   
    printf(" After:");
    for(int i=0; i<=max_bit_position; i++){
        printf("%d",bits[i]);
    }    
    return;
}

// Driver program to test above functions
int main()
{
    unsigned int n;
    scanf("%d", &n);
    reverseBits(n);
    return 0;
}
