#include<iostream>
using namespace std;

struct country
{
    char name[50];
    float area;
    int population;
};
//    void displayInfo (struct country x[50], int tc){
//        int i, a;
//        for(i = 0; i < tc; i++){
//        cout << "The area of " << x[i].name << " : " << x[i].area <<endl ;
//        cout << "and its population is " << x[i].population << endl << endl;
//        }

int main()
{
    int testCase, i;
    cout << "Enter Number of Inputs." << endl;
    cin >> testCase ;
    struct country x[50];
    for(i = 0; i < testCase; i++)
    {
        cout << "Enter Country Name: ";
        gets(x[i].name) ;
        cout << "Enter the Land area of " << x[i].name << " :";
        cin >> x[i].area ;
        cout << "Enter the population of " << x[i].name << " :";
        cin >> x[i].population ;
    }
    //void displayInfo(struct country ,int testCase);
//        char x[0].name = 'Bangladesh';
//        float x[0].area = 147570.0;
//        int x[0].population = 1600000000;
    int maxPop = x[0].population;
    int maxName = 0;
    for(i = 1; i < testCase ; i++)
    {
        if(x[i].population > maxPop)
        {
            maxName = i;
        }
    }
    cout << "The Country with the Highest Population is " << x[maxName].name << endl;
    return 0;
}
