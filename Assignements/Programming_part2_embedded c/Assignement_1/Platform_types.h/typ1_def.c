#include<stdio.h>
#include "a.h"
#include "b.h"
typedef unsigned int Uint_32;
typedef unsigned char Uchar_32;
struct person{
	Uint_32 age;
}b;
typedef struct person person1;
typedef struct {
	Uchar_32 grade;
}student_1;
int main(){
	S_C i,j;

	scanf("%d",&i.x);
    scanf("%d",&j.x);
	print1(i);
	print2(j);
	student_1 x;
	person1 y;
	x.grade=4;
	y.age=21;
	printf("the age of person is %d and the grade of the student is %d\n",x.grade,
			y.age);
	return 0;
}
void print1(S_C a){
	printf("the A function number is %d \n",a.x);
}
void print2(S_C b){
	printf("the B function number is %d \n",b.x);
}
