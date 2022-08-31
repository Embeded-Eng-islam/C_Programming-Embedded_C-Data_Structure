#include <stdio.h>
void main(void){
	char x;
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	{
		printf("%c is Alphapet",x);
	}
	else {
		printf("%c is not Alphapet",x);
	}
}

