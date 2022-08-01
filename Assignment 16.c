//Assignment 16 sol 1//
/*
#include<stdio.h>
int main(){
int r, c, mat1[100][100], mat2[100][100], sum[100][100], i, j;
printf("\nEnter the number of rows and columns : ");
scanf("%d %d", &r, &c);
printf("\nInput Matrix 1 elements : ");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
scanf("%d",&mat1[i][j]);
}
printf("\nMatrix 1\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat1[i][j]);
}
printf("\n");
}

printf("\nInput Matrix 2 elements : ");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
scanf("%d", &mat2[i][j]);
}
printf("\nMatrix 2\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat1[i][j]);
}
printf("\n");
}
// Adding Two matrices
printf("\nAdded Matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
sum[i][j]=mat1[i][j]+mat2[i][j];
}

// print the result

for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("%d ",sum[i][j]);

if(j==c-1)
{
printf("\n");
}
}

return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>

int main() {
   int a[10][10], b[10][10], c[10][10], i, j, k;
   int sum = 0;

   printf("\nEnter First Matrix : n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nEnter Second Matrix:n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &b[i][j]);
      }
   }

   printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }

   //Multiplication Logic
   for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }

   return (0);
}
*/

//Sol 3//
/*
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>

void main()

   {
     int i,j,arr1[50][50],sum=0,n;

       printf("\n\nFind sum of right diagonals of a matrix :\n");
       printf("---------------------------------------\n");

	 printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
			   if (i==j) sum= sum+arr1[i][j];
            }
        }


	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

       printf("Addition of the right Diagonal elements is :%d\n",sum);

return 0;
}
*/

//sol 5//
/*
#include <stdio.h>

void main()

   {
     int i,j,arr1[50][50],sum=0,n,m=0;

       printf("\n\nFind sum of left diagonals of a matrix :\n");
       printf("---------------------------------------\n");

	 printf("Input the size of the square matrix : ");
     scanf("%d", &n);
         m=n;
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
// calculate the sum of left diagonals
	 for(i=0;i<n;i++)
	 {
           m=m-1;
	   for(j=0;j<n ;j++)
            {
              if (j==m)
                {
                  sum= sum+arr1[i][j];
                }

            }
	 }
       printf("Addition of the  left Diagonal elements is :%d\n",sum);
    return 0;
   }
*/

//Sol 6//
/*
#include <stdio.h>

void main()
{
     int i,j,k,arr1[10][10],rsum[10],csum[10],n;

       printf("\n\nFind the sum of rows an columns of a Matrix:\n");
       printf("-------------------------------------------\n");


     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }


     for(i=0;i<n;i++)
     {
	  rsum[i]=0;
	  for(j=0;j<n;j++)
	  rsum[i]=rsum[i]+arr1[i][j];
     }


      for(i=0;i<n;i++)
      {
	  csum[i]=0;
	  for(j=0;j<n;j++)
		csum[i]=csum[i]+arr1[j][i];
      }

      printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",arr1[i][j]);
	   printf("% 8d",rsum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",csum[j]);
             }
            printf("\n\n");
  return 0;
}
*/

//sol 7//
/*
#include <stdio.h>

void main()
   {
  int arr1[10][10],i,j,n;
  float determinant=0;


       printf("\n\nDisplay the lower triangular of a given matrix :\n");
       printf("----------------------------------------------------\n");


     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

   printf("\nSetting zero in lower triangular matrix\n");
   for(i=0;i<n;i++){
      printf("\n");
      for(j=0;j<n;j++)
           if(i<=j)
             printf("% 4d",arr1[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
return 0;
   }
*/

//Sol 8//
/*
#include <stdio.h>

void main()
 {
  int arr1[10][10],i,j,n;
  float determinant=0;


 printf("\n\nDisplay the upper triangular of a given matrix :\n");
       printf("----------------------------------------------\n");

     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

   printf("\nSetting zero in upper triangular matrix\n");
   for(i=0;i<n;i++)
     {
      printf("\n");
      for(j=0;j<n;j++)
           if(i>=j)
             printf("% 4d",arr1[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
return 0;
 }
*/

//Sol 9//
/*
#include <stdio.h>
void main ()
{
	static int arr1[10][10];
	int i,j,r,c;
	int ctr=0;
     printf("\n\nDetermine whether a matrix is a sparse matrix :\n");
     printf("----------------------------------------------------\n");
     printf("Input the number of rows of the matrix : ");
     scanf("%d", &r);
     printf("Input the number of columns of the matrix : ");
     scanf("%d", &c);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
			if (arr1[i][j]==0)
			{
				++ctr;
			}
            }
        }
	if (ctr>((r*c)/2))
	{
		printf ("The given matrix is sparse matrix. \n");
	}
	else
		printf ("The given matrix is not a sparse matrix.\n");

	printf ("There are %d number of zeros in the matrix.\n\n",ctr);
return 0;
}
*/

//sol 10//
#include <stdio.h>
#define R 5
#define C 5


int getFirstOccur(int arr1[], int l, int h)
{
if(h >= l)
{
    int mid = l + (h - l)/2;
    if ( ( mid == 0 || arr1[mid-1] == 0) && arr1[mid] == 1)
    return mid;
    else if (arr1[mid] == 0)
    return getFirstOccur(arr1, (mid + 1), h);
    else
    return getFirstOccur(arr1, l, (mid -1));
}
return -1;
}
int findRowMaxOne(int arr2d[R][C])
{
    int max_row_index = 0, max = -1;
    int i, index;
    for (i = 0; i < R; i++)
    {
    index = getFirstOccur (arr2d[i], 0, C-1);
    if (index != -1 && C-index > max)
    {
        max = C - index;
        max_row_index = i;
    }
    }
    return max_row_index;
}

int main()
{
    int arr2d[R][C] = { {0, 1, 0, 1,1},
                       {1, 1, 1, 1, 1},
                       {1, 0, 0, 1, 0},
                       {0, 0, 0, 0, 0},
                       {1, 0, 0, 0, 1}
    };
    int i,j;
    //------------- print original 2D array ------------------
	printf("The given 2D array is :  \n");
	for(i = 0; i < R; i++)
	{
	for(j=0; j<C ; j++)
	{
	printf("%d  ", arr2d[i][j]);
	}

	printf("\n");
    }
//------------------------------------------------------
    printf("The index of row with maximum 1s is:  %d " , findRowMaxOne(arr2d));
    return 0;
}
