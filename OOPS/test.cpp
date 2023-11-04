#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c,d,f1,f2;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if((a-c)<(b-d))
	    {
	    printf("First\n");
	    }
	    else if((a-c)>(b-d))
	    {
	    printf("Second\n");
	    }
	    else
	    {
	    printf("Any\n");
	    }
	}
	return 0;
}