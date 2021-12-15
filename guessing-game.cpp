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

    int secret_number = rand() %100;

    cout << endl;

    cout << "What is your guess?" << endl;
    int guess;
    cin >> guess;
    cout << endl;

    if (guess == secret_number)
    {
        cout << "Spot on! This is the secret number." << endl;
    }
    else if (guess > secret_number) {
        cout << "Your guess is above the secrete number, try again!" << endl;
    }
    else {
        cout << "Your guess is below the secret number, try again" << endl;
    }
    
}