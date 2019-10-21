#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter initial ammount:\n");
    scanf("%f",&x);
    printf("Enter\nc for credit.\nd for debit.\nb for balance.");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'c':
        printf("Enter credit amount:\n");
        scanf("%f",&y);
        x=x+y;
        printf("New amount: %f",x);
        break;
    case 'd':
        printf("Enter credit amount:\n");
        scanf("%c",&y);
        if(x>=y)
        {

            x=x-y;
              printf("New amount: %f",x);
        }
        else
        {
            printf("Insufficient Amount in your account!!");
        }
        break;
    case 'b':
        printf("Your Account Balance: %f",x);
        break;
    default:
        printf("\nChoose A valid OPtion");
    }
   return 0;
}
