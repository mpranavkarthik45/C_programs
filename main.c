#include<stdio.h>
void input(int rows,int cols,int matrix[rows][cols]);
void addMatrix(int rows,int cols,int a[rows][cols],int b[rows][cols],int sum[rows][cols]);
void subtractMatrix(int rows,int cols,int a[rows][cols],int b[rows][cols],int diff[rows][cols]);
void output(int rows,int cols,int matrix[rows][cols]);
int main()
{
    int rows,cols;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    int a[rows][cols],b[rows][cols];
    int sum[rows][cols],diff[rows][cols];
    printf("Enter elements of first matrix:\n");
    input(rows,cols,a);
    printf("Enter elements of second matrix:\n");
    input(rows,cols,b);
    addMatrix(rows,cols,a,b,sum);
    subtractMatrix(rows,cols,a,b,diff);
    printf("\nSum of matrices:\n");
    output(rows,cols,sum);
    printf("\nDifference of matrices:\n");
    output(rows,cols,diff);
    return 0;
}
void input(int rows,int cols,int matrix[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter element at [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void addMatrix(int rows,int cols,int a[rows][cols],int b[rows][cols],int sum[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
}
void subtractMatrix(int rows,int cols,int a[rows][cols],int b[rows][cols],int diff[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            diff[i][j]=a[i][j]-b[i][j];
        }
    }
}
void output(int rows,int cols,int matrix[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}