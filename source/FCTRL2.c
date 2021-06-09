/*Author :- Vijay kumar
  student at :- Alagappa chettiar college of engineering and technology,kkdi */
 
#include<stdio.h>
int main(void)
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,array[200],temp_val,i,arr_index;
		array[0]=1;
		arr_index=0;
		scanf("%d",&n);
		for(;n>=2;n--)
		{
			temp_val=0;
			for(i=0;i<=arr_index;i++)
			{
				temp_val=(array[i]*n)+temp_val;
				array[i]=temp_val%10;
				temp_val=temp_val/10;
			}
			while(temp_val>0)
			{
				array[++arr_index]=temp_val%10;
				temp_val=temp_val/10;
			}
		}
		for(i=arr_index;i>=0;i--)
			printf("%d",array[i]);
		printf("\n");
	}				
	test--;
	return 0;
} 