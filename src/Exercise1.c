
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex1(int n){
	//Your codes here
	int i,j,k;
	k=1;
	for ( i=0;i<=n;i++){
		for (j=0;j<=i;j++){
			if (i==0 || j==0)
			  k=1;
			  else
			   k=k*(i-j+1)/j;

			   printf("%4d",k);

		}
	    printf("\n\n");
	}
	return 0;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}