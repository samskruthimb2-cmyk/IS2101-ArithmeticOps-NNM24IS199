#include<stdio.h>
int main(){int d,v,q=0,r=0,i;
printf("Enter dividend and divisor:");
scanf("%d%d",&d,&v);
for(i=31;i>=0;i--){r=(r*2)+((d>>i)&1);q=q*2;if(r>=0){r=r-v;q=q+1;}else{r=r+v;}}
if(r<0)r=r+v;
printf("Quotient=%d Remainder=%d",q,r);
}
