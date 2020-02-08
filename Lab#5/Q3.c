#include<stdio.h>
int main()
{
    int person, teen = 0, age, nonTeen = 0, i;
    printf("Enter the number of people.\n");
    scanf("%d", &person);
    printf("Enter the age of the people.\n");
    for(i = 1 ; i <= person; i++){
        scanf("%d", &age);
        if(age > 0 && age < 19 ){
            teen++;
        }
        else {
            nonTeen++;
        }
    }
    for(i = 2;i < person ; i++ ){
        if(teen % i == 0 && nonTeen % i == 0){
                teen = teen / i;
                nonTeen = nonTeen / i;
            printf("Ratio_ = %d : %d ", teen , nonTeen );
            break;}
            else {
                printf(" Ratio = %d : %d ", teen, nonTeen);
                break;
            }

    }
}
