#include <stdio.h>
int input(void);
int main()
{
    int n;
    printf("please input the number of students:");
    n=input();
    double score[n],aver,sum=0;
    printf("please input the score of every student:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d.",i+1);
        score[i]=input();
    }
    for (int i=0;i<n;i++)
    {
sum+=score[i];
    }
    aver=(float)sum/n;
    printf("the average score is:%f\n",aver);
for (int i=0;i<n;i++)
{
    if (score[i]>aver)
    {
        printf("the score of NO.%d student is above the average score\n",i+1);
    }
}
return 0;
}
int input(void)
{
    double number;
while((scanf("%lf",&number))!=1)
{
while(getchar()!='\n'||number<=0);
printf("please input again:");
}
return number;
}