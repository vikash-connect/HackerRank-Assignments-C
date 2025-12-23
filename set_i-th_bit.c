#include <stdio.h>

int main() {

int n,i;
scanf("%d %d",&n,&i);

int num=1<<i;
int num2= n|num;
printf("%d",num2);
    return 0;
}