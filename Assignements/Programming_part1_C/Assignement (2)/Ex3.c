#include <stdio.h>
void main (){
	int arr1[3][3], arr2[3][3];
	printf("   Helo World \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" enter the element of arr1 : \n");
			fflush(stdin);fflush(stdin);
			scanf("%d",&arr1[i][j]);
		}

	}
		printf("   this is my matrix \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("     %d ",arr1[i][j]);
		}
		printf("     \r\n");

	}
		printf("     \r\n");
			printf("   the transpose matrix \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr2[i][j]=arr1[j][i];
		}

	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("     %d ",arr2[i][j]);
		}
		printf("     \r\n");

		}

}
