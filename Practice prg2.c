#include<stdio.h>
char str[100],pat[50],rep[50];
int i,j,n,m,count,count1;
void findreplace(char str[],char pat[],char rep[])
{
	for(i=0;str[i]!='\0';i++);
	n=i;
	printf("Length of text=%d\n",n);
	for(i=0;pat[i]!='\0';i++);
	m=i;
	printf("Length of pattern=%d\n",m);
	for(i=0;i<n;i++)
	{
		j=0,count=0;
		while((str[i]==pat[j])&&(str[i]!='\0'))
		{
			count++,i++,j++;
		}
		if(count==m)
		{
			count1++;
			int k=i-m;
			int p=0;
			while(rep[p]!='\0')
			str[k++]=rep[p++];
		}
		else
		i++;
	}
	if(count1==0)
	printf("\nPattern not found in the given text\n");
	else
	{
		printf("\nTotal no. of occurences:%d",count1);
		printf("\nNew string after replacement is:%s",str);
	}
}
int main()
{
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	printf("Enter the pattern:\n");
	scanf("%s",pat);
	printf("Enter the new word to replace:\n");
	scanf("%s",rep);
	findreplace(str,pat,rep);
	return 0;
}
