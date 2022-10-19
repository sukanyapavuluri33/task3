#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len=n*2-1;
    int ar[len][len];
    for(int x=0;x<n;x++){
        for(int i=x;i<len-x;i++){
            for(int j=x;j<len-x;j++){
                ar[i][j]=n-x;
            }
        }
    }
     for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                printf("%d ",ar[i][j]);
            }
            printf("\n");
     }
  	// Complete the code to print the pattern.
    return 0;
}
