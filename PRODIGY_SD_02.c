#include<stdio.h>
#include<conio.h>

int main()
{
    int gen_num, user_num, i=0;
    time_t t1;
    printf("************************Welcome to the Guessing Game************************\n");
    printf("System has been generated a random number...\n");
    srand ( (unsigned) time (&t1));
    gen_num = rand() % 100 + 1;
    do
    {
        if (i == 0)
        {
            printf("Enter a number between 1 to 100 : ");
            scanf("%d",&user_num);
        }
        else
        {
            if(user_num > gen_num + 10)
            {
                printf("Too High...!\n");
                printf("Enter a number between 1 to 100 : ");
                scanf("%d",&user_num);

            }
            if (user_num < gen_num - 10)
            {
                printf("Too Low...!\n");
                printf("Enter a number between 1 to 100 : ");
                scanf("%d",&user_num);

            }
            else
            {
                printf("Keep trying...!\n");
                printf("Enter a number between 1 to 100 : ");
                scanf("%d",&user_num);

            }
            
        }
        i = i+1;
    } while (user_num != gen_num);
    printf("Your guess is correct...!\n");
    printf("Exiting...");
    return 0;
}
