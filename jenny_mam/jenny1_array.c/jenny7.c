# include<stdio.h>

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Enter for matrix %d & %d element is\n",i+1,j+1);
            scanf("%d",&a[i][j]);

        }
        
    }
    printf("your matrix is \n");
     for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
       int sr=0,sc=0;
       for(int j=0;j<3;j++)
       {
        sr=sr+a[i][j];
        sc=sc+a[j][i];
       }
       printf("Sum of row %d is %d\n",i+1,sr);
       printf("Sum of column %d ios %d\n",i+1,sc);

    }


    return 0;
}