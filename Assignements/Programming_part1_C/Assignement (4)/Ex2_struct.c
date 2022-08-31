#include<stdio.h>
struct distance {
 int feet;
float inch;
}distance_1,distance_2;
int main(){

printf("Enter information of distance 1\r\n");
printf("Enter feet_1\r\n");
scanf("%d",&distance_1.feet);
printf("Enter inch_1\n");
scanf("%f",&distance_1.inch);
printf("Enter information of distance 1\r\n");
printf("Enter feet_2\n");
scanf("%d",&distance_2.feet);
printf("Enter inch_2\n");
scanf("%f",&distance_2.inch);
printf("The result of inches Add : %f + %f = %f \r\n",distance_1.inch,distance_2.inch,(distance_1.inch+distance_2.inch));
printf("The result of feets Add : %d + %d = %d \r\n",distance_1.feet,distance_2.feet,(distance_1.feet+distance_2.feet));
return 0;}
