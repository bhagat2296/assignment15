#include <stdio.h>
#include <stdlib.h>



/*int sum(int[],int);                                                                 //Question 1
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("greatest number in the array is %d",sum(a,n));
    return 0;
}

int sum(int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(b[0]<b[i])
            b[0]=b[i];

    }

    return b[0];

}*/



/*int sum(int[],int);                                                                 //Question 2
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("smalllest number in the array is %d",sum(a,n));
    return 0;
}

int sum(int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(b[0]>b[i])
            b[0]=b[i];

    }

    return b[0];

}*/


/*int sum(int[],int);                                                                 //Question 3
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
    printf("sorted array\n");
    for(int i=0;i<n;i++)
    printf(" %d\n",a[i]);
    return 0;
}

int sum(int b[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        int temp=0;
        if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

    }

    for(int i=0;i<n;i++)
        //printf("%d\n",b[i]);

    return b[i];

}*/



/*int sum(int[],int);                                                                 //Question 5
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("duplicate value is %d\n",sum(a,n));
    return 0;
}

int sum(int b[], int n)
{
    for(int i=0;i<n;i++)
        if(b[i]==b[i+1])

    return b[i];

}*/


/*void sum(int[],int);                                                                 //Question 6
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
    return 0;
}

void sum(int b[], int n)
{
    printf("array in reverse order\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",b[i]);

    }
}*/



/*int sum(int[],int);                                                                 //Question 7
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("total duplicate values in array is %d\n",sum(a,n));
    return 0;
}

int sum(int b[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(b[i]==b[j])
        {
         count++;
         break;
        }
        }
    }

         return count;

}*/




/*void sum(int[],int);                                                                 //Question 8
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
    return 0;
}

void sum(int b[], int n)
{


    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
        if(i!=j)
        {
            if(b[i]==b[j])
            {
              count++;
               break;
            }
        }

        }
        if(count==0)
            printf("%d",b[i]);
    }

}*/

/*int main()                                                          //Question 9
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);
    int m=n;
    int a[n];
    int c[2*n];

    printf("enter value in 1st array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }

    int b[n];

    printf("enter %d values in 2nd array \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        c[m]=b[i];
        m++;
    }


    printf("\n values in merged array\n");
    for(int i=0;i<2*n;i++)
    printf("%d\n",c[i]);


int temp=0;

printf("\n values in descending order\n");

for(int i=0;i<2*n;i++){
    for(int j=i+1;j<2*n;j++)
    {
        if(c[i]<c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }

    }
}

    for(int i=0;i<2*n;i++)
    printf("%d\n",c[i]);

}*/

/*void freqCount(int[],int);                                    //Question 10
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number in array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    freqCount(a,n);
    //printf("greatest number in the array is %d",sum(a,n));
    return 0;
}

void freqCount(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
       for(int j=0;j<n;j++)
        {
          if(i!=j)
          {
            if(a[i]==a[j])
                cnt++;
          }
         }
        printf("frequency of a[%d] is %d\n",i,cnt);
    }

}*/
