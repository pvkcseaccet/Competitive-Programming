# include<stdio.h>
# include<string.h>
 
int main(void)
{
	int test,i,j,k,str_length;
	scanf("%d",&test);
	while(test)
	{
		char str[300];
		scanf("%s",str);
		str_length=strlen(str)/test;
		k=0;
		char toandfro[str_length][test];
		for(i=0;i<str_length;i++)
		{
			if(i%2)
			{
			for(j=test-1;j>=0;j--)
			toandfro[i][j]=str[k++];
			}
			else
			{
			for(j=0;j<test;j++)
			toandfro[i][j]=str[k++];
			}
		}
		for(i=0;i<test;i++)
		{
			for(j=0;j<str_length;j++)
			{
			printf("%c",toandfro[j][i]);
			}
		}
		printf("\n");
		//fflush(test);
		scanf("%d",&test);
		}
	return(0);
} 