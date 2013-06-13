#include <stdio.h>
#define MAX_INT 3
#define MINIMUM2(a,b) ((a)<(b)?(a):(b))
#define MINIUM3(c,d) ((c)<(MINIMUM2)?(c):(d))

int main()
{
	int ans[ MAX_INT ];
	int i, min;

	printf("Enter 3 numbers: \n");
	for( i = 1; i <= MAX_INT; i++){
		printf("?");
		scanf("%d", &ans[i]);
	}

	min = MINIMUM3( (MINIMUM2( ans[1], ans[2] )), ans[3] );
	
	printf("\nThe lowest number is ");
	printf("%d", min);	

	return 0;
}