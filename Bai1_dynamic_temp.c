#include<stdio.h>
#include<inttypes.h>
#include<stdint.h>
#include<stdlib.h>



int main(void) {
    float *temperature_c = malloc(sizeof(float));
    scanf("%f",temperature_c);
    printf("Nhiệt độ là: %.2f",*temperature_c);
}