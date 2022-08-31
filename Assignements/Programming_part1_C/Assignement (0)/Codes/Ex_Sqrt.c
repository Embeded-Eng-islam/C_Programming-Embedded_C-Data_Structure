#include<stdio.h>
#include<math.h>
double sqrtt(int n){
double start,end,mid;
start = 0;
 end = n;
    while((end - start)>=0.000001){
        mid = (start + end)/2;
        if(mid*mid < n)
			start = mid;
		if(mid*mid >= n)
			end = mid;	}
return mid;
}
int main() {

	int num;
	double result;
	printf("Enter a Number: \n");
	scanf("%d",&num);
    result=sqrtt(num);
	printf("Square Root of %d is %f",num,result);
}
