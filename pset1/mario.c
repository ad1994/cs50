#include <stdio.h>
#include <cs50.h>



int main(void)
{
    
    printf("height:");
    int s = GetInt();
    
    while(s <= 0)
    {
        printf("Try again!\n");
        s = GetInt();
    }
    
    for(int i = 2; i <= s+1; i++)
    {
        for(int k = 0; k < ((s+1)-i); k++)
            {
                printf(" ");
            }
        for(int j = 0; j < i; j++)
        {
            
            printf("#");
        }
        printf("\n");
    }
    
    
}

    