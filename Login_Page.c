#include<stdio.h>
int main(int argc, char const *argv[])
{
    start:
    int pw,epw;
    int nchances = 0;
    int chances_Left = 3;
    int cont;
    
    printf("Create your password: ");
    scanf("%d",&epw);
    printf("Now enter your password to log in: ");


    do
    {
        scanf("%d",&pw);
        chances_Left--;
        nchances++;
        if (pw == epw || nchances >= 3)
        {
            goto login;
        }
        printf("%d chances left\n",chances_Left);
        printf("Invalid! Try again!\n");
    
    } while (pw != epw);
   login:
   if (pw == epw)
   {

    printf("You took %d chances to login.\n\n",nchances);
    printf("Login successful\n");
   }
   else{
    printf("Failed to login, account locked\n\n");
    printf("Do you want to reset your password?\n");
    printf("Press 1 for yes and 2 for no\n");
    scanf("%d",&cont);
    if (cont == 1)
    {
        goto start;
    }
    else{
        printf("Ok, you can try again after 10 min\n");
    }
    
   }
    
    return 0;
}
