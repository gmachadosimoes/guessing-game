#include<iostream>
#include<random>
using namespace std;

int main() {
    cout << endl;
    cout << "****************************" << endl;
    cout << endl;
    cout << "Welcome to the guessing game!" << endl;
    cout << endl;
    cout << "****************************" << endl;
    cout << endl;

    int secretNumber = rand() %100;
    bool wrongGuess = true;
    int attempts = 0;
    double score = 1000.0;

    while (wrongGuess)
    {
        attempts++;
        int guess;
        cout << "Attempt number " << attempts << endl;
        cout << "What is your guess?" << endl;
        cin >> guess;

        double lost_score = abs(guess - secretNumber) / 2.0;
        score -= lost_score;
        bool correctGuess = guess == secretNumber;
        bool above = guess > secretNumber;
        
        cout << "Your guess is: " << guess;
        cout << endl;

        if (correctGuess)
        {
            cout << "Spot on! This is the secret number." << endl;
            wrongGuess = false;
        }
        else if (above) {
            cout << "Your guess is above the secrete number, try again!" << endl;
        }
        else {
            cout << "Your guess is below the secret number, try again" << endl;
        }
    
    }
       cout << "Game over!" << endl;
       cout << "You nailed it in " << attempts << " attempts." << endl;
       cout.precision(2);
       cout << fixed;
       cout << "Your score is " << score << " pontos." << endl;
}
