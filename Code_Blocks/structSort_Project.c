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
	int m_Birthdate_year;
	int m_Birthdate_month;
	int m_Birthdate_day;
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
		printf(" Enter your m_Birthdate_day\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].m_Birthdate_day);
		printf(" Enter your Birthdate_month\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].m_Birthdate_month);
		printf(" Enter your Birthdate_year\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].m_Birthdate_year);
		printf("  Enter your salary\r\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[coun].m_salary);
		coun++;
		if(coun==100)
		{	break;}
		printf(" Enter y leter to enter more data until get 100 empolyee \r\n");
	}while(getch()=='y');

	for(i=0;i<coun-1;i++){
		for(j=0;j<coun-i-1;j++){
			if(employees[j].m_Birthdate_year>employees[j+1].m_Birthdate_year||
					(employees[j].m_Birthdate_year==employees[j+1].m_Birthdate_year&&
							employees[j].m_Birthdate_month>employees[j+1].m_Birthdate_month)||
							(employees[j].m_Birthdate_year==employees[j+1].m_Birthdate_year&&
									employees[j].m_Birthdate_month==employees[j+1].m_Birthdate_month&&
									employees[j].m_Birthdate_day>employees[j+1].m_Birthdate_day))
				tempemployee=employees[j];
			employees[j]=employees[j+1];
			employees[j+1]=tempemployee;
		}
	}
	for(i=0;i<coun;i++){
		printf("%s\t%d/%d/%d\t%d\r\n",employees[i].m_name,
				employees[i].m_Birthdate_day,
				employees[i].m_Birthdate_month,
				employees[i].m_Birthdate_year,
				employees[i].m_salary);
	}

	return 0;}
