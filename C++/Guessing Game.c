#include<iostream>
using namespace std;

int GuessingG(int num1){
    int i, Answer = 2019;
    int GuessLimit =  10;
    bool Result = false;
    for(i = 0; GuessLimt == 0 && Result; i++){
        if(num1 == Answer){
            cout << "Congratulations You WIN!" ;
            GuessLimit = 0;
            Result = true;
        }
        else if (num1 > Answer && !Result){
                GuessLimit--;
            cout << "The Answer is Lower ." << endl;
            cout << "Try Again you have " << GuessLimit << " Guess left" << endl ;
        }
        else if (num1 < Answer && !Result){
            GuessLimit--;
            cout << "The Answer is Higher." << endl;
            cout << "Try Again you have " << GuessLimit << " Guess left." << endl ;
        }
    }
    if(GuessLimit == 0 && !Result){
        cout << "You are Out of Guesses." << endl ;
        cout << "You Lost." << endl;
    }
}
int main(){
    cout << "Guess the Correct Number." << endl;
   int GuessingG(cin);
}
