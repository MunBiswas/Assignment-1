#include<stdio.h>
int main()
{

int N;
int i;

    scanf("%d",&N);
    
    for(i=1;i<=N;i++)
    {
        if(i%3==0 && i%7==0)
        
        printf("%d\n",i);
    }

return 0;

}

    