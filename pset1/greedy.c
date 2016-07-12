#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float s = -1.0;
    
    do 
    {
        printf("O hai! How much change is owed?\n");
        s = GetFloat();
    }
    while (s < 0);
    
    
    float s2 = s * 100.0;
    int i = round(s2);
    int coins = 0;
    
    
    if (i >= 25)
    {
        coins += i/25;
        i = i%25;
    }
        
    if (i >= 10)
    {
        coins += i/10;
        i = i%10;
    }
    
    if (i >= 5)
    {
        coins += i/5;
        i = i%5;
    }
    
    if (i >= 1)
    {
        coins += i;
        i=0;
    }
    
    printf("%d\n",coins);
}



    