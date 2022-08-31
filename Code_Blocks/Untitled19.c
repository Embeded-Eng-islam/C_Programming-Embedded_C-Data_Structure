#include<stdio.h>
void main(){
int arr1[3][3]={{5,2,0},{1,0,5},{7,9,6}};
int arr2[3][3];
int i,j;
for ( i=0;i<3;i++)
  for( j=0;j<3;j++){
        arr2[i][j]=arr1[j][i];
                             }
for ( i=0;i<3;i++){
   for( j=0;j<3;j++){
        if(j==0)
        printf("|%d ",arr2[i][j]);
        else if(j==2)
        printf(" %d|",arr2[i][j]);
        else
        printf(" %d ",arr2[i][j]);

                    }
        printf("\n");
                       }
printf("****************************************************************");
printf("\n");
for ( i=0;i<3;i++){
   for( j=0;j<3;j++){
        if(j==0)
        printf("|%d ",arr1[i][j]);
        else if(j==2)
        printf(" %d|",arr1[i][j]);
        else
        printf(" %d ",arr1[i][j]);

                    }
        printf("\n");
                       }
}
