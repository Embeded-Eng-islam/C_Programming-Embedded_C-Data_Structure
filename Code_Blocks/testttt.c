#include<stdio.h>
int uniqu(int a[],int siz){
	int flag=0,i,j;
	for( i=0;i<siz;i++){
		flag=0;
		for( j=0;j<siz;j++){

			if(a[j]==a[i])
				++flag;}

		if (flag==1)
			break;
	}
	if (flag==1)
		return a[i];
	else
		return 0;

}
int main(){
	int a[7]={3,2,5,3,4,4,5};
	printf(" your unique number is = %d \n",uniqu(a,7));
	return 0;
}

