int MaxValue(int *p, int t)
{
    int i, max;
    max = p[0];
    for(i = 0; i < t; i++)
    {
        if(p[i] > max)
        {
            max = p[i];
            //c++;
        }
    }
    return max;
}
int CountVowel(char *d){
    int i, countV = 0;
    for(i = 0; d[i] != NULL; i++){
        if(d[i] == 'A' || d[i] == 'E' || d[i] == 'I' || d[i] == 'O' || d[i] == 'U' || d[i] == 'a'|| d[i] == 'e' || d[i] == 'i' || d[i] == 'o' || d[i] == 'u'){
            countV++;
        }
    }
    return countV;
}
float Average(int *x, int t){
    int i;
    float avg, sum = 0;
    for(i = 0; i < t; i++){
        sum = sum + x[i];
    }
    avg = sum / t;
    return avg;
}
