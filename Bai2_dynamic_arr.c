#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>


int main(void) {
    uint16_t num;
    printf("Nhập num: ");
    scanf("%"SCNu16, &num);
    uint16_t *adc_buffer = malloc(num * sizeof(uint16_t));
    uint16_t sum = 0;
    uint16_t *reset = adc_buffer;
    // kiểm tra HEAP
    if (adc_buffer == NULL) return 1;
    uint16_t *check_ptr = adc_buffer; 
    uint16_t *end_ptr = adc_buffer + num;
    
    while (adc_buffer <= end_ptr-1){
        scanf("%"SCNu16,adc_buffer);
        adc_buffer +=1;
    }

    while (reset <= end_ptr-1){
        sum += *reset;
        reset +=1;
    }
    printf("SUM: %"PRIu16"",sum);
    free(check_ptr);
}