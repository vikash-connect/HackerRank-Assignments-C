#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width)

{
    int result= length*width;
    return result;
}


int main() {
    int length, width;
    scanf("%d %d", &length, &width);
    int result= area(length,width);
    printf("The area is: %d units", result);
       
    return 0;
}
