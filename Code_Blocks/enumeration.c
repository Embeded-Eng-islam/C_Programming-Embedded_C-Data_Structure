#include <stdio.h>
enum gender {male,female};
struct SPerson{
	char name[50];
	enum gender person;
};
int main(){

	struct SPerson group []={{"Islam",male},{"Asmma",female}};
	int i;
	for(i=0;i<sizeof(group)/sizeof(struct SPerson);i++){

		printf(" %s is  %s \r\n",group[i].name,
				(group[i].person==male)?"male":"female")

		;
	}
return 0;}

