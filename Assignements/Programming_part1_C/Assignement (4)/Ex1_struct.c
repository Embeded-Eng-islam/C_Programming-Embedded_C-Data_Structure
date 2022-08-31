/*
 ============================================================================
 Name        : My.c
 Author      : islam Alhewaj
 Version     : 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>
struct SEmployee{
	char m_name[50];
	int roll;
	int m_salary;
};
int main(){
	struct SEmployee employees[100];
	struct SEmployee tempemployee;
	char firstname[25],lastname[25];
	int coun=0,i,j;
	do{
		printf(" Enter your name first then in the second line enter last name \r\n");
		fflush(stdin);fflush(stdout);
		scanf("%s",firstname);
		scanf("%s",lastname);
		strcpy(employees[coun].m_name,firstname);
		strcat(employees[coun].m_name," ");
		strcat(employees[coun].m_name,lastname);
		printf(" Enter your m_roll\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].roll);
		fflush(stdin);fflush(stdout);
		printf("  Enter your salary\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].m_salary);
		coun++;
		if(coun==100)
		{	break;}
		printf(" Enter y leter to enter more data until get 100 empolyee \r\n");
	}while(getch()=='y');

	for(i=0;i<coun;i++){
		printf("%s\t%d\t%d\r\n",employees[i].m_name,
				employees[i].roll,
				employees[i].m_salary);
	}

	return 0;}
