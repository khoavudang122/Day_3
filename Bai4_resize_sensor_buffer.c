#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<inttypes.h>


int main(void) {
    printf("Vui lòng nhập số: ");
    int num;
    scanf("%d",&num);
    uint16_t *arr = malloc(num * sizeof(uint16_t));
    
    for (int i=0; i<num; i++){
        scanf("%"SCNu16,arr);
    }
    uint8_t flag;
    printf("Bạn có muốn mở rộng size không?(1:có , 2;không): ");
    scanf("%"SCNu8,&flag);
    uint8_t new_num;
    if (flag ==1){
        printf("Bạn muốn mở rộng ra thành bao nhiêu? ");
        scanf("%d",&new_num);
        arr = realloc(arr,new_num * sizeof(uint16_t));
        for (int i=0; i < new_num; i++){
        scanf("%"SCNu16,arr);
    }
    }
    else return 1;
    free(arr);
    return 0;
}