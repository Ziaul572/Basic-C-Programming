#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, k, j, p, temp;
    gets(name);
    p = strlen(name);

    for(j = 0; j < p; j++)
    {
        for(i = 0; i < p; i++)
        {
            for(k = 0; k < p - 1; k++)
            {
                if(name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')
                {
                    if(name[k] > name[k + 1])
                    {
                        temp = name[k];
                        name[k] = name[k + 1];
                        name[k + 1] = temp;
                    }
                }
            }
        }
    }
    printf("%s", name);
}
