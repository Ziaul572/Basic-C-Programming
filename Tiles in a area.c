#include<stdio.h>
int main()
{
    int l,w,tiles;
    printf("Enter the length and width of the room\n");
    scanf("%d%d",&l,&w);
    tiles =ceil(l/2.00)*ceil(w/2.00);
    printf("Tiles needed =%d",tiles);
    return 0;
}
