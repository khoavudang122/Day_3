#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<inttypes.h>



int main (void) {
    int num;
    printf("Vui lòng nhập số: ");
    scanf("%d",&num);
    uint8_t *arr = malloc(num * sizeof(uint8_t));
    if (!arr) return 1;
    printf("0");
    return 0;
}