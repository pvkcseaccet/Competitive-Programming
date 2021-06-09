# include<stdio.h>
# include<math.h>
 
int main(void)
{
	int distance,velocity,test,i;
	double angle;
	scanf("%d",&test);
	for (i=0;i<test;i++)
	{
		scanf("%d %d",&distance,&velocity);
		angle=((0.5*asin((9.806*distance)/(velocity*velocity)))*180)/(2*acos(0.0));
		printf("Scenario #%d: ",i+1);
		if (angle<=45.00)
		printf("%0.2f\n",angle);
		else
		printf("-1\n");
	}
	return (0);
} 