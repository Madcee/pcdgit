#include<stdio.h>

int rotate(int a, int n)
{
 n=n%(sizeof(a)*8);
 return a>>n| << (sizeof(a)*);
}

int main()
{
int a;
scanf("%x",&a);
for(int i=0;i<35;i++) {
        printf("%x %x\n",a,rotate(a,i));
}
return 0;
}
