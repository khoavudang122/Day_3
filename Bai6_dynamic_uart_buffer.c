#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>


int main(void) {

    int num;
    
    printf("Mời nhập số lượng phần tử: ");
    scanf("%d",&num);
    uint8_t max_num = 0;
    uint8_t *uart_buffer = calloc(num,sizeof(uint8_t));
    uint8_t *ptr = uart_buffer;
    if (uart_buffer == NULL) return 1;
    for (int i=0;i<num;i++){
        scanf("%"SCNu8,ptr);
        if (max_num < *ptr ) max_num = *ptr;
        ptr++;
    }
    printf("%"PRIu8"\n",max_num);

    
}