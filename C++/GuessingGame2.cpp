#include <iostream>
using namespace std ;
int main(){
    int i, guessCount, secretNum = 162;
    bool outofGuess = false;
    int guessLimit = 10;
    int guess;
    while (secretNum != guess && !outofGuess){
        if(guessCount < guessLimit){
            cout << "Enter Your Guess." << endl;
            cin >> guess;
            if (guess < secretNum){
                cout << "\tHigher" << endl ;
            }
            else if (guess > secretNum){
                cout << "\tLower" << endl ;
            }
            guessCount++;
        }
        else{
            outofGuess = true;
        }
    }
    if(!outofGuess){
    cout << "\nYou Win." << endl;
    }
    else {
        cout << "\nYou Lose." << endl;
    }
}
