#include <stdio.h>

int main(void){
    int equivalent_sum,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the num:");
    scanf("%d",&equivalent_sum);
    int nums[size];
    int array_indices[size][2];
    for(int x=0;x<size;x++){
        for(int y=x+1;y<size;y++){
           if(nums[x]+nums[y]==equivalent_sum){
             array_indices[x][0]=x,array_indices[x][1];
           }
        }
    }
    for(int m=0;m<size;m++){
        for(int n=0;n<2;n++){
            print("%d",array_indices[m][n]);
        }
        printf("\n");
    }
}