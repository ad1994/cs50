#include <stdio.h>
#include <cs50.h>

int ozToBottleConvert(int num);

int main(void)
{
    
    printf("minutes:\n");
    int s = GetInt();
    int s2= ozToBottleConvert(s);
    printf("bottles:%i\n", s2);
}

int ozToBottleConvert(int num)
    {
        return (num*192)/16;
    }
    