#include<stdio.h>
#include<conio.h>
void main(){
	int a[3][3],b[3][3],c[3][3],d[3][3],i,j,k;
	char ch;
//input of first matrix//
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("write vlue for matrix A at A%d%d:-",i,j);
		scanf("%d",&a[i][j]);
		}
	}
//output of first matrix//
printf("Matrix A is :-\n");
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("%d\t",a[i][j]);
		}
	printf("\n");}
//input of second matrix//
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("write vlue for matrix B at B%d%d:-",i,j);
		scanf("%d",&b[i][j]);
		}
	}		
//output of second matrix//
printf("Matrix B is :-\n");
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("%d\t",b[i][j]);
		}
	printf("\n");}
//choose the logic//
printf("if you want to sum the matrix press 's'\nif you want to multiply the matrix press 'm' ");
printf("\nif you want to see transpose of matrix A prees 't'\nIf you want to know the diagonal values press 'd'");
scanf(" %c",&ch);
//intialising the input//
if(ch=='s'||ch=='S')
	{printf("the sum of matrix A nad B is:-\n");}
else if(ch=='m'||ch=='M')
	{printf("multiplication of matrix A&B is:-");}
else if(ch=='t'||ch=='T')
	{printf("Transpose of matrix A is;-\n");
	}
else if(ch=='d'||ch=='D')
	{printf("Diagonal elements of matrix A is:-");
	}
else if(ch!='t'||ch!='m'||ch!='s'||ch!='d')
	{printf("invlid input");
	}
//trnanspose of matrrix A//
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	if(ch=='t'||ch=='T')
		{d[i][j]=a[j][i];
		printf("%d\t",d[i][j]);}
		}	
	printf("\n");}
//loops for sum and multiplication//	
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{
		if(ch=='s'||ch=='S')
			{c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);}
		else if(ch=='m'||ch=='M')
			{c[i][j]=0;
			for (k=0;k<3;k++)
				{c[i][j]=c[i][j]+(a[k][i]*b[j][k]);
				}
			}
		}
		//condition to print diagonal element
		if(ch=='d'||ch=='D')
			{printf("%d",a[i][i]);}	
	printf("\n");}
	
	for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
		if(ch=='m'||ch=='M')
			{printf("%d\t",c[i][j]);
			}
	printf("\n");
		}
}
//end//