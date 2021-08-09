#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int score;
int sum(int,int);
void verify(int,int);
void check_score(int);


int main()
{
int user_input;
score = 0;
srand(time(0));
int i;
for(i=0; i<=4; i++)
    {
    int a = rand();
    int b = rand();
    printf("Calculate\n %d + %d\n",a,b);
    int added_value = sum(a,b);
    scanf("%d",&user_input);
    verify(added_value, user_input);
}

check_score(score);

    return 0;
}
int sum(int a, int b)
    {
    int add = a +b;
    return add;
    }
void verify(int added_value, int user_input)
   {
    if (user_input==added_value)
        {
            score++;
            printf("correct\n");
        }
    else{
        printf("Incorrect,please try again later\n");
    }
     return 0;
    }
    void check_score(int score);

        printf("your are write! %d\n",score);
    }
    else{
     printf("your score is %d",score)

    return 0;
}
