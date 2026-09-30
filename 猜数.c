#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)   
{
    int a,ret;
    int b;
    int c;
    char e;
    do
    {
            int d=0;
    srand(time(NULL));
    a=rand()%100+1;
    do
    {
        printf("guess a number:");
        ret=scanf("%d",&b);
        while (ret!=1)
    {
        printf("人机连字都不会打了？请重新输入:");
        b=getchar();
        while (getchar() != '\n');
        ret=scanf("%d",&b);
    }
        if (b==a)
    {printf("you are right");
        break;
    }
    else if (b<a)
    {printf("bigger\n");
        d++;
    }
    else 
    {printf("smaller\n");
        d++;
    }
}while(d<=10);
    printf("你一共猜了%d次\n",d);
    if (d<=5)
        printf("纯运乐乐");
    else if (d>5&&d<7)
        printf("人机");
    else if (d>=7&&d<10)
    {  printf("唐完了兄弟\n");}
    else
    {
        printf("春完了兄弟\n");
    }
    printf("do you want to play again?(y or o)\n");
    getchar();   
    scanf("%c",&e);}while(e=='y');
    printf("不敢玩就直说");
    return 0;
}

