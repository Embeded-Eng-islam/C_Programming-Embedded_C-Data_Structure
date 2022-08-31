#include<stdio.h>
#include<string.h>
#include<conio.h>
struct SDate{

	int m_year;
	int m_month;
	int m_day;

};
struct SEmployee{
	char m_name[50];
	struct SDate Birthdate;
	struct SDate Graduation;
	int m_salary;
};
struct SDate ReadDate(char namedate[50])
{
	struct SDate date;
	printf(" enter %s as 23/7/2001\r\n",namedate);
	scanf("%d/%d/%d",&date.m_day,&date.m_month,&date.m_year);
	return date;
};
struct SEmployee Reademployee(){
	struct SEmployee Employee;
	char name[25];
	printf(" Enter the first name then the second\r\n");
	scanf("%s",Employee.m_name);
	scanf("%s",name);
	strcat(Employee.m_name," ");
	strcat(Employee.m_name,name);
	Employee.Birthdate=ReadDate("Birthdate");
	Employee.Graduation=ReadDate("Graduation");
	printf(" Enter the salary\r\n");
	scanf("%d",&Employee.m_salary);
	return Employee;

};
void print(struct SEmployee Employee){
	printf("%s\t%d/%d/%d\t%d/%d/%d\t%d\r\n",
			Employee.m_name,
			Employee.Birthdate.m_day,
			Employee.Birthdate.m_month,
			Employee.Birthdate.m_year,
			Employee.Graduation.m_day,
			Employee.Graduation.m_month,
			Employee.Graduation.m_year,
			Employee.m_salary);}

int main(){
	struct SEmployee Employee1;
	Employee1=Reademployee();
	print(Employee1);
	return 0;}
