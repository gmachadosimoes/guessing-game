#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() 
{
    cout << endl;
    cout << "****************************" << endl;
    cout << endl;
    cout << "Welcome to the guessing game!" << endl;
    cout << endl;
    cout << "****************************" << endl;
    cout << endl;
    cout << "Choose the difficulty level:" << endl;
    cout << "Easy (E), Intermediate (M) or Hard (H)" << endl;

    char difficultyLevel;
    cin >> difficultyLevel;

    int numberOfAttempts;

    if (difficultyLevel == 'E')
    {
        numberOfAttempts = 15;
    }
    else if (difficultyLevel == 'I')
    {
        numberOfAttempts = 10;
    }
    else {
        numberOfAttempts = 5;
    }
     

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;
    bool wrongGuess = true;
    int attempts = 0;
    double score = 1000.0;

    for (attempts = 1; attempts <= numberOfAttempts; attempts++) {
        
        int guess;
        cout << "Attempt number " << attempts << endl;
        cout << "What is your guess?" << endl;
        cin >> guess;

        double lostScore = abs(guess - SECRET_NUMBER)/2.0;
        score -= lostScore;

        bool correctGuess = guess == SECRET_NUMBER;
        bool above = guess > SECRET_NUMBER;
        
        cout << "Your guess is: " << guess;
        cout << endl;

        if (correctGuess)
        {
            cout << "Spot on! This is the secret number." << endl;
            wrongGuess = false;
            break;
        }
        else if (above) 
        {
            cout << "Your guess is above the secret number." << endl;
        }
        else 
        {
            cout << "Your guess is below the secret number." << endl;
        }
    }

       cout << "Game over!" << endl;

       if(wrongGuess) {
           cout << "You lose, try again!" << endl;
       }
       else {
            cout << "You nailed it in " << attempts << " attempts." << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Your score is " << score << " pontos." << endl;

       }
}
