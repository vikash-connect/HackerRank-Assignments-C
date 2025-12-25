#include <stdio.h>

int main() { 
    int x;
    int y;
    scanf("%d %d", &x, &y);
    if(y%2==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}