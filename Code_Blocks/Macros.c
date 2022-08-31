#include <stdio.h>
#define val 2
#define Macros(...) printf(__VA_ARGS__)
#define islam(a,...) printf(__VA_ARGS__,a)
#define FUNCTION(name,a) int fun__##name(int x){return a*x;}
FUNCTION(quad,4)
FUNCTION(doubl,2)
#define Dprintf(debuglevel,...) if(debuglevel>1)printf(" the fun is %s  and the line is %d\n",__func__,__LINE__);\
                                                            printf(__VA_ARGS__);

void main(){
#ifndef val
printf("%d\n",fun__quad(5));
#else
printf(" the line is %d\r\n",__LINE__);
#endif // val
printf(" the verion of c code blocks %d\r\n",__STDC_VERSION__);
printf(" the value is %d\n",val);
Macros(" the value is %d\n",val);
islam(val," the value is %d\n");

Dprintf(1,"Hello\n");

Dprintf(3,"Hello");



}
