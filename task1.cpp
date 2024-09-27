#include <iostream>
using namespace std;

// Include to allow conversion to lowercase
#include <cctype>

// Include to use pow
#include <cmath>

string name;
char answer;

string oddOrEven(int numberToCheck) {
    // Checking if number modulo 2 is equals to 0
    return (numberToCheck % 2 == 0) ? "even" : "odd";
}

void getName() {
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
}

void getBirthYear() {
    int birthYear, age;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << endl;
    age = 2024 - birthYear;
    cout << "Your age is " << age << endl;
    cout << "In 10 years, you will be " << age + 10 << " yars old." << endl;
}

void getFavoriteNumbers() {
   
    bool multipleNumbers = true; 
    char answer;
    int currentNumber;

    vector<int> nArray;

    while (multipleNumbers) {
        cout << "Enter your favorite number: ";
        cin >> currentNumber;

        nArray.push_back(currentNumber);

        cout << "Would you like to insert another favorite number (y/n): ";
        cin >> answer;

        if (tolower(answer) == 'n') {
            multipleNumbers = false;
        }
    }

    if (!nArray.empty()) {
        int minNumber = numeric_limits<int>::max();
        int maxNumber = numeric_limits<int>::min();

        for (int num : nArray) {
            if (num < minNumber) {
                minNumber = num;
            }
            if (num > maxNumber) {
                maxNumber = num; 
            }
        }
        cout << "The Lowest favorite number entered: " << minNumber << endl;
        cout << "The Highest favorite number entered: " << maxNumber << endl;
    
        }

}

void getBasicInfo() {
    // Declaring variables
    string name;
    int number, age;

    // Requesting inputs
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;

    
    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    cout << "Enter your favorite number: ";
    cin >> number;
    cout << endl;

    // Checking if number is odd or even
    string oddEven = oddOrEven(number);
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    cout << "Your favorite number is " << number << " which is "  << oddEven << endl; 


    // Printing if odd or even
    if (oddEven == "odd") {
        cout << "The cube of your favorite number is " << pow(number, 3) << endl;
    } else {
        cout << "The square of your favorite number is " << pow(number, 2) << endl;
    }


}


int main() {
    int option;
    // Give options in menu
    cout << "Please select one option:" << endl << "1 - General information" << endl << "2 - Age information" << endl << "3 - Favorite number" << endl;
    cin >> option;

    // Switch the option chosen
    switch (option) {
        case 1:
        getBasicInfo();
        break;

        
        case 2:
        getBirthYear();
        break;

        
        case 3:
        getFavoriteNumbers();
        break;

        default:
        break;
        
    }
}

