#include<stdio.h>
int main(){int a,b,res=0,sign=0;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
if(a<0){a=-a;sign^=1;}
if(b<0){b=-b;sign^=1;}
while(b>0){if(b%2==1)res=res+a;a=a*2;b=b/2;}
if(sign)res=-res;
printf("Product=%d",res);
}
