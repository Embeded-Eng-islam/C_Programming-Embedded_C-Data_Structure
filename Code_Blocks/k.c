#include <stdio.h>
void main(void){
for(int i=0;i<3;i++){
	for(int j=3;j>i;j--)
	{
		printf(" %d\t",j);
	}
	printf(" \r\n");
}


}
