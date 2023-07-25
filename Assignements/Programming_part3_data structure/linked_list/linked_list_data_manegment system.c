#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"
typedef struct{
	int id;
	char name[40];
	float hight;
}Sdata_t;

struct node{
	Sdata_t student;
	struct node* PNextStudent;
};

#define DPRINTF(...) 	{fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}

struct node* GPfirstStudent=NULL;

void fill_record(struct node* new_student ){
	char temp_var[40];
	DPRINTF("enter the id number : ");
	gets(temp_var);
	new_student->student.id=atoi(temp_var);
	DPRINTF("enter the name of student : ");
	gets(new_student->student.name);
	DPRINTF("enter the hight of student : ");
	gets(temp_var);
	new_student->student.hight=atof(temp_var);
}


void Add_Student(){
	struct node* new_student;
	struct node* previous_student;
	if (GPfirstStudent==NULL) {
		new_student=(struct node*)malloc(sizeof(struct node)*1);
		GPfirstStudent=new_student;
	}
	else {

		previous_student=GPfirstStudent;
		while(previous_student->PNextStudent){
			previous_student=previous_student->PNextStudent;
		}
		new_student=(struct node*)malloc(sizeof(struct node));
		previous_student->PNextStudent =new_student;
	}
	fill_record(new_student);
	new_student->PNextStudent=NULL;
}

void view_student(){
	struct node* current_student;
	int count=1;
	current_student=GPfirstStudent;
	while(current_student){
		DPRINTF("\n the number of student is %d",count);
		DPRINTF("\n student ID : %d",current_student->student.id);
		DPRINTF("\n student NAME : %s",current_student->student.name);
		DPRINTF("\n student HIGHT : %f",current_student->student.hight);
		current_student=current_student->PNextStudent;
		count++;
	}
	}


int main(){
	DPRINTF("Enter your choice 1 or 2 ;\n");
	char temp_s[10];

	while(1){
		gets(temp_s);
		switch (atoi(temp_s)) {
		case 1:
			Add_Student();
			break;
		case 2:
			view_student();
			break;
		default:
			break;
		}

	}

	return 0;
}





