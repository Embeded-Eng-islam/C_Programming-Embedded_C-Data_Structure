#include<stdio.h>
#include<string.h>
struct SEmployee{
	char m_name[50];
     int roll;
	int m_salary;
};

struct SEmployee Reademployee(){
	struct SEmployee Employee;
	char name[25];
	printf(" Enter the first name then the second\r\n");
	scanf("%s",Employee.m_name);
	scanf("%s",name);
	strcat(Employee.m_name," ");
	strcat(Employee.m_name,name);
    printf(" Enter the roll\r\n");
	scanf("%d",&Employee.roll);
	printf(" Enter the salary\r\n");
	scanf("%d",&Employee.m_salary);
	return Employee;

};
void print(struct SEmployee Employee){
	printf("%s\t%d\t%d\r\n",
			Employee.m_name,
			Employee.roll,
			Employee.m_salary);}

int main(){
	struct SEmployee Employee1;
	Employee1=Reademployee();
	print(Employee1);
	return 0;}
