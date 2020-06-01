#include<stdio.h>

struct Student
{
    char name [20];
    float Cgpa;
};

int HighestCgpa(struct Student *p, int t)
{
  int i, s, max;
    max=0;
//   max=a[0].Cgpa;
    for(i=0 ; i<t; i++)
    {
       if(p[i].Cgpa >max )
        {
            max=p[i].Cgpa;
            s=i;
        }
    }
      return s;
}

 int main()
 {
    int n, i, p;
// scanf("%d", &n);
    struct Student arr[10];
    printf("Enter how many student: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the Student Name: ");
        scanf("%s", arr[i].name);
        printf("\nEnter Cgpa: ");
        scanf("%f", &arr[i].Cgpa);
    }
    p=HighestCgpa(arr, n);

    printf("Highest Cgpa Name : ");
    printf("%s", arr[p].name);
}
