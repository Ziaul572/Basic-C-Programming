#include<iostream>
#include"structure.h"
using namespace std;

struct book {
    char title[50];
    char author[40];
    int page;
    float price;
};

int main(){
        struct book num[50];
        int testCase;
        cout << "Enter Number of Books." << endl;
        cin >> testCase;
        int i;
        for(i = 0; i < testCase; i++){
            cout << "Enter the Title of the Book number: " << i+1 << endl;
            cin >> num[i].title;
            cout << "Who is the Author of '" << num[i].title << "'" << endl;
            cin >> num[i].author;
            cout << "How many pages the book '" << num[i].title << "' has?" << endl;
            cin >> num[i].page;
            cout << "What's the price of '" << num[i].title << "' book." << endl;
            cin >> num[i].price ;
        }
        void displayInfo(struct book *num, int testCase) ;

    }
