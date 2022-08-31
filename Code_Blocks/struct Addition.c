#include<stdio.h>
struct SComplex {
	float m_R;
	float m_I;
};
struct SComplex read(char y){
	struct SComplex a;
	printf(" Enter the (%c) as a complex number real is first and the imaginary second\r\n",y);
	scanf("%f%f",&a.m_R,&a.m_I);
	return a;
};
struct SComplex Add(struct SComplex i,struct SComplex j){
	struct SComplex k;
	k.m_R=i.m_R+j.m_R;
	k.m_I=i.m_I+j.m_I;
	return k;
};
void print(struct SComplex k,char l){
	printf("the (%c)is = %f + j%f",l,k.m_R,k.m_I);

};
void main(){
	struct SComplex Reem,Mena,Amira;
	char x,y,z;
	Reem=read('x');
	Mena=read('y');
	Amira=Add(Reem,Mena);
	print(Amira,'z');

}
