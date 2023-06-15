#include<stdio.h>

int swap(int num1, int num2){
    int tmp=num1;
    num1=num2;
    num2=tmp;
}
int main(){
    int num1=10, num2=20;
    swap(num1, num2);
    printf("%d and %d\n",num1,num2);
    return 0;
}