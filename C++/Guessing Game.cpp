#include <iostream>
using namespace std;

int main(){
    int num, i, Answer = 2019;

    int GuessLimit =  10;
    bool Result = false;
    int GuessCount = 0;
    cout << "Enter Your Guess." << endl;
    for(GuessLimit = 10; GuessLimit == 0 && Result; GuessLimit--){
            cin >> num ;
        if(num == Answer){
            cout << "Congratulations You WIN!" ;
            GuessLimit = 0;
            Result = true;
        }
        else if (num > Answer && !Result){
                //GuessLimit--;
            cout << "The Answer is Lower ." << endl;
            cout << "Try Again you have " << GuessLimit << " Guess left" << endl ;
            GuessCount++;
        }
        else if (num < Answer && !Result){
            //GuessLimit--;
            cout << "The Answer is Higher." << endl;
            cout << "Try Again you have " << GuessLimit << " Guess left." << endl ;
            GuessCount++;
        }
    }
    if(GuessLimit == 0 && !Result){
        cout << "You are Out of Guesses." << endl ;
        cout << "You Lost." << endl;
    }
}
 /*int main(){
    cout << "Guess the Correct Number." << endl;
    int guess ;
    cin >> guess;
   GuessingG(guess);
} */
