#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>

typedef struct {
    uint16_t rpm;
    float temperature;
    float current;

} SensorData;

void print(SensorData* ptr){
    printf("%.2f\n",ptr->temperature);
    printf("%.2f\n",ptr->current);
    printf("%"PRIu16"\n",ptr->rpm);
}

int main(void) {
    SensorData *sd_ptr = malloc(sizeof(SensorData));
    if (sd_ptr == NULL) return 1;
    scanf("%f",&sd_ptr->temperature);
    scanf("%f",&sd_ptr->current);
    scanf("%"SCNu16,&sd_ptr->rpm);

    print(sd_ptr);
    free(sd_ptr);
    return 0; 
    
}