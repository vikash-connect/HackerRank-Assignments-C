#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a,b;
scanf("%d %d",&a,&b);

a=a%10;
b=b%10;

if(a==b)
{
printf("YES");


}
else{printf("NO");}

return 0;
}