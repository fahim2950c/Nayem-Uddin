#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter input: ");
    scanf("%d",&n);
     for(i=1; i<=n; i++)
    {
        printf("\t");
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        printf("\t");
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}

