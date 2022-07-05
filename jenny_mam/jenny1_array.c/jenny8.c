# include<stdio.h>

int main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter %d & %d element of matrix 1\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter %d & %d element of matrix 2\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
         c[i][j]=a[i][j]+b[i][j];
           
        }
    }
    printf("Addition of matrix 1 & 2 is as\n");
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d \t",c[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}