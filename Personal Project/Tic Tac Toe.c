#include<stdio.h>
int main()
{
    int n;
    char arr[5][8] = {{' ', ' ' ,'|', ' ', ' ','|', ' ', ' '}, {'-','-','+','-','-','+','-','-'}, {' ', ' ','|', ' ', ' ', '|', ' ', ' '}, {'-', '-', '+', '-', '-', '+', '-', '-'}, {' ', ' ', '|', ' ', ' ', '|', ' ', ' '}};
    int i = 1, j, a, b, p;
    int player1, player2;
    int z = 0;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0, q8 = 0, q9 = 0;
   /* for(i = 0; i < 5; i++){
        for(j = 0; j < 8; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    */
    printf("Tic\n   Tac\n      Toe\n");
    printf(" ><|[]|  \n --+--+--\n   |><|[]\n --+--+--\n []|  |><\n\n");
    printf("Available Slot Numbers.\n  01|02|03\n  --+--+--\n  04|05|06\n  --+--+--\n  07|08|09\n");
   for(p = 1; p < 10; p++){
        if (z == 1){
            break;
        }
        //i++;
        if(p % 2 != 0){
            printf("PLAYER 1 Enter Slot Value.\n");
        }
        else{
            printf("PLAYER 2 Enter Slot Value.\n");
        }
           lebel :
               lebelq :
           scanf("%d", &n);
            // i++;
   switch (n)
   {
       //i++;
     case 1 :
         if(q1 == 1){
            goto lebelq;
         }
         q1++;
        if (p % 2 != 0){
            arr[0][0] = '>' ;
            arr[0][1] = '<' ;
        }
        else{
            arr[0][0] = '[' ;
            arr[0][1] = ']' ;
        }
        //i++;
        break ;
     case 2 :
         if(q2 == 1){
            goto lebelq;
         }
         q2++;
        if (p % 2 != 0){
            arr[0][3] = '>' ;
            arr[0][4] = '<' ;
        }
        else{
            arr[0][3] = '[' ;
            arr[0][4] = ']' ;
        }
        break ;
     case 3 :
         if(q3 == 1){
            goto lebelq;
         }
         q3++;
        if (p % 2 != 0){
            arr[0][6] = '>' ;
            arr[0][7] = '<' ;
        }
        else{
            arr[0][6] = '[' ;
            arr[0][7] = ']' ;
        }
        break ;
     case 4 :
         if(q4 == 1){
            goto lebelq;
         }
         q4++;
        if (p % 2 != 0){
            arr[2][0] = '>' ;
            arr[2][1] = '<' ;
        }
        else{
            arr[2][0] = '[' ;
            arr[2][1] = ']' ;
        }
        break ;
     case 5 :
         if(q5 == 1){
            goto lebelq;
         }
         q5++;
        if (p % 2 != 0){
            arr[2][3] = '>' ;
            arr[2][4] = '<' ;
        }
        else{
            arr[2][3] = '[' ;
            arr[2][4] = ']' ;
        }
        break ;
     case 6 :
         if(q6 == 1){
            goto lebelq;
         }
         q6++;
        if (p % 2 != 0){
            arr[2][6] = '>' ;
            arr[2][7] = '<' ;
        }
        else{
            arr[2][6] = '[' ;
            arr[2][7] = ']' ;
        }
        break ;
     case 7 :
         if(q7 == 1){
            goto lebelq;
         }
         q7++;
        if (p % 2 != 0){
            arr[4][0] = '>' ;
            arr[4][1] = '<' ;
        }
        else{
            arr[4][0] = '[' ;
            arr[4][1] = ']' ;
        }
        break ;
     case 8 :
         if(q8 == 1){
            goto lebelq;
         }
         q8++;
        if (p % 2 != 0){
            arr[4][3] = '>' ;
            arr[4][4] = '<' ;
        }
        else{
            arr[4][3] = '[' ;
            arr[4][4] = ']' ;
        }
        break ;
     case 9 :
         if(q9 == 1){
            goto lebelq;
         }
         q9++;
        if (p % 2 != 0){
            arr[4][6] = '>' ;
            arr[4][7] = '<' ;
        }
        else{
            arr[4][6] = '[' ;
            arr[4][7] = ']' ;
        }
        break ;
        default :
        printf("Enter values within the availabe sloths.\n");
        goto lebel;
   }
   for(i = 0; i < 5; i++){
        for(j = 0; j < 8; j++){
                if(z > 0){
            break;
        }
            printf("%c", arr[i][j]);
        }
        printf("\n");

   if( (arr[0][0] == '>' && arr[2][3] == '>' && arr[4][6] == '>') || (arr[0][6] == '>' && arr[2][3] == '>' && arr[4][0] == '>') ){
    printf("Player 1 WINS Diagonally!!\n");
    z++;
    break;
   }
   else if ( (arr[0][0] == '[' && arr[2][3] == '[' && arr[4][6] == '[') || (arr[0][6] == '[' && arr[2][3] == '[' && arr[4][0] == '[') ){
    printf("Player 2 WINS Diagonally!!\n");
    z++;
    break;
   }
/*   for(a = 0; a < 5; a++){
//        player1 = 0;
//        player2 = 0;
//    for(b = 0; b < 8; b++){
//        if(arr[a][b] == '>'){
//            player1++;
//        }
//        else if(arr[a][b] == '['){
//            player2++
//        }
//    }
*/   }
   if( (arr[0][0] == '>' && arr[0][3] == '>' && arr[0][6] == '>') || (arr[2][0] == '>' && arr[2][3] == '>' && arr[2][6] == '>') || (arr[4][0] == '>' && arr[4][3] == '>' && arr[4][6] == '>') ){
    printf("Player 1 WINS Horizontally!!\n");
    z++;
    break;
   }
   else if( (arr[0][0] == '[' && arr[0][3] == '[' && arr[0][6] == '[') || (arr[2][0] == '[' && arr[2][3] == '[' && arr[2][6] == '[') || (arr[4][0] == '[' && arr[4][3] == '[' && arr[4][6] == '[') ){
    printf("Player 2 WINS Horizontally!!\n");
    z++;
    break;
   }
   if( (arr[0][0] == '>' && arr[2][0] == '>' && arr[4][0] == '>') || (arr[0][3] == '>' && arr[2][3] == '>' && arr[4][3] == '>') || (arr[0][6] == '>' && arr[2][6] == '>' && arr[4][6] == '>') ){
    printf("Player 1 WINS Vertically!!\n");
    z++;
    break;
   }
   else if( (arr[0][0] == '[' && arr[2][0] == '[' && arr[4][0] == '[') || (arr[0][3] == '[' && arr[2][3] == '[' && arr[4][3] == '[') || (arr[0][6] == '>' && arr[2][6] == '>' && arr[4][6] == '>') ){
    printf("Player 2 WINS Vertically!!\n");
    z++;
    break;
   }
   }
    if (z == 0 && i == 5 && j == 8){
   printf("Draw.\n");
    }
printf("\n");
   for(i = 0; i < 5; i++){
    for(j = 0; j < 8; j++){
        printf("%c", arr[i][j]);
    }
    printf("\n");
   }
   }

