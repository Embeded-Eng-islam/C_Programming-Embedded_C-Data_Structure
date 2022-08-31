#include<stdio.h>
enum type {intt,floatt,doublee};
union vars{
int int_var;
float float_var;
double double_var;
};
union vars Add(union vars var_1,union vars var_2,enum type type_55){
    union vars result;
    switch(type_55)
    {
case intt:
    result.int_var=var_1.int_var+var_2.int_var;
    break;
case floatt:
    result.float_var=var_1.float_var+var_2.float_var;
    break;
case doublee:
    result.double_var=var_1.double_var+var_2.double_var;
    break;
    }
    return result;
};
void main(){
union vars v1,v2,out;
v1.int_var=155;
v2.int_var=156;
out=Add(v1,v2,floatt);
printf( "%d + %d = %d\r\n",v1.int_var,v2.int_var,out);
v1.float_var=155.6;
v2.float_var=156.7;
out=Add(v1,v2,floatt);
printf( "%f + %f = %f\r\n",v1.float_var,v2.float_var,out.float_var);





}
