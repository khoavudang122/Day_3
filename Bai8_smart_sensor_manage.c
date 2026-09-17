#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>


typedef struct
{
    uint8_t id;
    uint8_t status;
    uint16_t rpm;
    float temperature;

} SensorData;



int main(void) {
    int num;
    printf("Nhập số lượng phần tử: ");
    scanf("%d",&num);
    SensorData *arr_sensor = malloc(num * sizeof(arr_sensor));
    if (arr_sensor ==NULL) return 1;
    SensorData *inp_ptr = arr_sensor;
    SensorData *ptr=arr_sensor;
    SensorData *output_ptr = arr_sensor;
    uint16_t max_num = 0;
    float average_temp=0;
    for (int i=0; i < num; i++){
        printf("Sensor %d\n",i+1);
        scanf("%"SCNu8, &inp_ptr->id );
        scanf("%"SCNu8,&inp_ptr->status);
        scanf("%"SCNu16,&inp_ptr->rpm);
        scanf("%f",&inp_ptr->temperature);
        if ( max_num < inp_ptr->rpm ) max_num = inp_ptr->rpm;
        average_temp += inp_ptr->temperature;
        inp_ptr ++;
    }
    average_temp = average_temp / num;
    for (int i=0;i<num;i++){
        if (output_ptr->status != 0) printf("%"PRIu8"\n",output_ptr->id);
        output_ptr++;
    }

    free(arr_sensor);



}