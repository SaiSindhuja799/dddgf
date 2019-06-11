#include <stdio.h>

int main(void) {
	// your code goes here
	int n,s,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=a[0];
	for(i=1;i<n;i++)
	{
		s=s^a[i];
	}
	printf("%d",s);
	return 0;
}
