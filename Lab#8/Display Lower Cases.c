#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    char copy[100];
    int i, p, j = 0;
    printf("Enter a String.\n");
    gets(arr);
    p = strlen(arr);
    for(i = 0; i < p; i++){
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            copy[j] = arr[i];
            j++;
        }
    }
    copy[j] = '\0';
    printf("%s", copy);
}
