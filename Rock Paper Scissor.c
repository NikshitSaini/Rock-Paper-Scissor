#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber()
{
    srand(time(NULL));
    return rand() % 3;
}
int game(int num)
{
    int choice;
    int c1 = 0, p1 = 0;
    printf("Enter your choice\n1.Rock\n2.paper\n3.Scissor\n");
    scanf("%d", &choice);
    if (num == 0)
    {
        if (choice == 1)
        {
            printf("Match Tied both choose rock\n");
        }
        else if (choice == 2)
        {
            printf("You won Computer chooses Rock\n");
            p1++;
        }
        else if (choice == 3)
        {
            printf("Computer wins he choose rock\n");
            c1++;
        }
    }
    else if (num == 1)
    {
        if (choice == 1)
        {
            printf("Computer wins he choose paper\n");
            c1++;
        }
        else if (choice == 2)
        {
            printf("Match Tied both choose paper\n");
        }
        else if (choice == 3)
        {
            printf("You won Computer chooses paper\n");
            p1++;
        }
    }
    else if (num == 2)
    {
        if (choice == 1)
        {
            printf("You won Computer chooses Scissor\n");
            p1++;
        }
        else if (choice == 2)
        {
            printf("Computer wins he chooses Scissor\n");
        }
        else if (choice == 3)
        {
            printf("Match Tied both choose Scissor\n");
            c1++;
        }
    }
    if (c1 > p1)
    {
        return 0;
    }
    else if (p1 > c1)
    {
        return 1;
    }
    else if (p1 == c1)
    {
        return 10;
    }
}
int main()
{
    int s = 0, sum = 0;
    int number;
    char name[58];
    printf("Enter Your name :- ");
    scanf("%s", &name);
label:
    s = 0;
    sum = 0;
    for (int i = 0; i < 3; i++)
    {
        number = generateRandomNumber();
        sum = game(number);
        s = s + sum;
    }
    if (s == 1 || s == 0 || s == 10)
    {
        printf("Sorry to say but You loose , better luck next time\n");
    }
    else if (s == 2 || s == 3 || s == 12 || s == 21)
    {
        printf("Contratulation %s You won :)\n", name);
    }
    else if (s == 30 || s == 11)
    {
        printf("Match Tied -_-\n");
    }
    else{
        printf("NULL");
    }
    int q;
    printf("Press 0 to quit and 1 to play again\n");
    scanf("%d", &q);
    if (q == 0)
    {
        goto end;
    }
    else if (q == 1)
    {
        goto label;
    }

end:
    return 0;
}