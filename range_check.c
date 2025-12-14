#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=0;
    int low=0;
    int high=0;
    scanf("%d %d %d", &n, &low, &high);
    if(n>=low && n<=high)
        printf("In Range");
    else
        printf("Out of Range");
    return 0;
}
