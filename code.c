#include <stdio.h>
                                         
int main(){
    int stairs;
    printf("Enter the number of stairs you want: ");
    scanf("%d",&stairs);
    int i,j;
    for(i=1;i<=stairs;i++){
        for(j=1;j<=i;j++){
            printf("01");
        }
        printf(" ");
    }
                     
return 0;
}
