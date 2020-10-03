#include<stdio.h>
#include<assert.h>
#define _is_const(x)  _Generic((&x) ,\
     const int* :"a is  a const integer declaration" ,\
     int *:"a is only int declaration", \
     default:"a is an other type")
int main(){
    const int i=1;
    int j=1;
    float k=1.2;
    printf("i is :%s\n",_is_const(i));
    return 0;
}