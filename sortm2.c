#include <stdio.h>

int main()
{

char ch;
int arr[5]={3,2,4,5,1};
int i,j,temp,k,m,n;
int input1,input2;
m=0;

printf("Enter a or d=");
scanf("%c",&ch);
            

 for(i=m;i<5;i++)
   {
        for(j=i+1;j<5;j++)
        {
            if(ch=='a')
            {
                input1=i;
                input2=j;
            }
            else if (ch=='d')
            {
                input1=j;
                input2=i;
            }
            

             if(arr[input1]>arr[input2])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

    for(k=0;k<5;k++)
    {
        printf("\t %d",arr[k]);
    }

   


    
   

    
}