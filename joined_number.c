#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d)

{
    
 a=a*1000;
 b=b*100;
 c=c*10;
 int res=a+b+c+d;
 int fres= res*5;

return fres;


}

int main() {

  int a,b,c,d;
 scanf("%d %d %d %d",&a,&b,&c,&d);
 int fres=buildNumber(a,b, c,d);

printf("The number is: %d",fres);
    return 0;
}