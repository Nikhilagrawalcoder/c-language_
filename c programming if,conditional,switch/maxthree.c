#include <stdio.h>

int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
a>=b&&a>=c?printf("%d",a):b>=c&&b>=a?printf("%d",b):printf("%d",c);
return 0;
}