#include <stdio.h>
int winput(void);
int main()
{
    int n;
    printf("input the number of students\n");
    n = winput();
    if (n <= 0)
    {
        printf("error");
        return 0;
    }
    int score[n];
    printf("input the score of everybody\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d.", i + 1);
        score[i] = winput();
        if (score[i] < 0)
        {
            printf("error");
            return 0;
        }
    }
    int total = 0;
    for (int a = 0; a <= n - 1; a++)
    {
        total += score[a];
    }
    printf("the average score is %.2f\n", (float)total / n);
    return 0;
}
int winput(void)
{
    int value, ch;
    printf("input a number: ");
    while (scanf("%d", &value) != 1)
    {
        printf("input error,please input again:");
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
        if (ch == EOF)
            return -1;
    }
    return value;
}