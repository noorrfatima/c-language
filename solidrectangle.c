#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows:  ");
    scanf("%d",&n);
    int m;
    printf("enter a number of columns : ");
    scanf("%d",&m);
    // *****... upto n no of stars

    for(int i=1;i<=n;i++){ //outer loop => no of lines (horizontal)
        for(int i=1;i<=m;i++){ // inner loop => no of stars in each line 
            printf("*");
        }
        printf("\n");
    }
    
    return 0; 
} 