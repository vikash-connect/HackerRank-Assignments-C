#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int y;
    scanf("%d", &y);
    if(y%4==0){
        printf("Yes, %d is a leap year.", y);
    }
    else if(y%4>0){
        printf("No, %d is not a leap year.", y);
    }
    else{
        printf("The given year %d is Invalid year.", y);
    }
        
    return 0;
}