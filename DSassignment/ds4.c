#include <stdio.h>  
int main()  
{  
    int r,c;
    printf("Enter row and column of matrix:\n");
    scanf("%d%d",&r,&c);
    int sparse[r][c];
    printf("Enter sparse array elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&sparse[i][j]);
        }
    }
    
    int size = 0;  
    for(int i=0; i<r; i++){  
        for(int j=0; j<c; j++){  
            if(sparse[i][j]!=0) size++; 
        }  
    }  
    int matrix[3][size];   
    int k=0;  
    for(int i=0; i<r; i++){  
        for(int j=0; j<c; j++){  
            if(sparse[i][j]!=0){  
                matrix[0][k] = i;  
                matrix[1][k] = j;  
                matrix[2][k] = sparse[i][j];  
                k++;  
            }  
      }  
    }  
    for(int i=0 ;i<3; i++){  
        for(int j=0; j<size; j++){  
            printf("%d ", matrix[i][j]);  
            printf("\t");  
        }  
        printf("\n");  
    }  
    return 0;  
}  
