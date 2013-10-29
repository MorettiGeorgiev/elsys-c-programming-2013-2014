#include <stdio.h>
int main(){
        int n,i,j;
        float sum=0;
        scanf("%d",&n);
        float arr[n][n];
		if(n<=100 && n>0){
        for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%f", &arr[i][j]);
            }
        }       
        for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i<j)
					sum += arr[i][j];
            }
        }
       printf("%f\n", sum);
	}
	else{
		printf("error");
	}
return 0;
}
