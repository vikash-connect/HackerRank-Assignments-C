#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void split(int num){
        int first= num/100;
        int second= num%100;
        int third= second/10;
        int final= second%10;
        printf("%d %d %d",first, third, final);
    }
int main() {
        int num;
        scanf("%d", &num);
        split(num);
        return 0;
}
