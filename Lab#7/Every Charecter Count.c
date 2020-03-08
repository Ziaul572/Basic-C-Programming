#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, j, p, count;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++)
    {
        count = 1;
        for(j = i + 1; j < p; j++)
        {
            if(name[i] == name[j])
            {
                count++;
                name[j] = '0';
            }
        }
        if(name[i] == '0')
        {
            continue;    //To skip counting same charecters!
        }
        else
        {
            printf("%c = %d\n", name[i], count);
        }
    }
}
