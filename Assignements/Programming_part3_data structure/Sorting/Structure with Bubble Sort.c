#include<stdio.h>
#include<string.h>
struct Empolyee{
	char name[40];
	int birth_day;
	int birth_month;
	int birth_year;
	int salary;

};
int main(){
	struct Empolyee temp_empolyee,empolyee[100];
	char first_name[20],second_name[20];
	int i=0,j,counter=0;
	do{
		printf("Enter the 1st name of empolyees \r\n");
		scanf("%s",first_name);
		printf("Enter the 2nd name of empolyees \r\n");
		scanf("%s",second_name);
		strcpy(empolyee[i].name,first_name);
		strcat(empolyee[i].name," ");
		strcat(empolyee[i].name,second_name);
		printf("Enter the Birthday \r\n");
		scanf("%d",&empolyee[i].birth_day);
		printf("Enter the month \r\n");
		scanf("%d",&empolyee[i].birth_month);
		printf("Enter the birthyear \r\n");
		scanf("%d",&empolyee[i].birth_year);
		printf(" enter the salary\n");
		scanf("%d",&empolyee[i].salary);
		printf(" if you want to enter more element enter y as a small letter \r\n");
        counter++;
        if(counter==100)
            break;
	}while(getch()=='y');

	for ( i = 0; i < counter-1; ++i) {
		for (j = i+1; j < counter; ++j) {
			if((empolyee[i].birth_year>empolyee[j].birth_year)||((empolyee[i].birth_year=empolyee[j].birth_year)&&
					(empolyee[i].birth_month>empolyee[j].birth_month))||((empolyee[i].birth_year=empolyee[j].birth_year)&&
							(empolyee[i].birth_month=empolyee[j].birth_month)&&(empolyee[i].birth_day>empolyee[j].birth_day))){
				temp_empolyee=empolyee[i];
				empolyee[i]=empolyee[j];
				empolyee[j]=temp_empolyee;
			}
		}
	}

	for (int var = 0; var < counter; ++var) {
		printf(" the name is %s and %d/%d/%d and salary is %d \r\n",empolyee[var].name,empolyee[var].birth_day,empolyee[var].birth_month,empolyee[var].birth_year,empolyee[var].salary);
	}


	return 0;}
