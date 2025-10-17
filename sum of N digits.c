#include<Stdio.h>
int main ()
{
	int i=1,N,sum=0;
	printf("\nEnter N value");
	scanf("%d",&N);
	while(i<=N){
	
	
		sum+=i;
		i++;
		printf("%d\n",sum);
		return 0;
}
}
