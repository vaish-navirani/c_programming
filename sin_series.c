/*vaishnavi
 * 2105764
wap to compute the sin series using function .
sin(x)=x-x3/3!+x5/5!-x7/7!+.....*/

#include <stdio.h>
#include <math.h>

int fac(int x)
{
	int i,fac=1;
	for(i=1;i<=x;i++)
	fac=fac*i;
	return fac;
}
int main()
{
	float x,Q,sum=0;
	int i,j,limit;
	printf("Enter the value of x in degrees : ");
	scanf("%f",&x);
	printf("Enter the limit : ");
	scanf("%d",&limit);
	Q=x;
	x = x*(3.14/180);
	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		sum=sum+pow(x,j)/fac(j);
		else
		sum=sum-pow(x,j)/fac(j);
	}

	printf("Sin(%0.1f): %f",Q,sum);
	return 0;