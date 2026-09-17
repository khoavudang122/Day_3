#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>



int main(void) {
    int num;
    printf("Nhập số lượng phần tử: ");
    scanf("%d",&num);

    uint8_t *source = malloc(num*sizeof(uint8_t));
    if (source ==NULL) return 1;
    uint8_t *ptr_2 = source;
    uint8_t *ptr = source; 
    for (int i=0;i < num; i++ ){
        scanf("%"SCNu8,ptr);
        ptr++;
    }
    uint8_t *destination = calloc(num+1,sizeof(uint8_t));
    uint8_t *ptr_3 = destination;
    for (int i=0;i<num;i++){
        destination = source;
        printf("%"PRIu8"\n",*destination);
        destination++;
        source++;
    }

    free(ptr_2);
    free(ptr_3);

}