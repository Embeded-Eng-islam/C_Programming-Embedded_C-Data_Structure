#include<stdio.h>
#include<string.h>
struct Seng{
char G_name[50];
int Birthdate_year;
int Birthdate_month;
int Birthdate_day;
int G_salary;
};
void main(){
struct Seng a,b,c;
strcpy(a.G_name,"Islam Abdelnasser");
a.Birthdate_year=2001;
a.Birthdate_month=7;
a.Birthdate_day=23;
a.G_salary=1000;
strcpy(b.G_name,a.G_name);
b.Birthdate_year=a.Birthdate_year;
b.Birthdate_month=a.Birthdate_month;
b.Birthdate_day=a.Birthdate_day;
b.G_salary=a.G_salary;
c=a;
printf("%s\t%d/%d/%d\t%d\r\n",a.G_name,a.Birthdate_day,a.Birthdate_month,a.Birthdate_year,a.G_salary);
printf("%s\t%d/%d/%d\t%d\r\n",b.G_name,b.Birthdate_day,b.Birthdate_month,b.Birthdate_year,b.G_salary);
printf("%s\t%d/%d/%d\t%d\r\n",c.G_name,c.Birthdate_day,c.Birthdate_month,c.Birthdate_year,c.G_salary);
}
