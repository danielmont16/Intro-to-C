#include <iostream>
using namespace std;
// Include to use pow
#include <cmath>

string name;
char answer;

string oddOrEven(int numberToCheck)
{
    // Checking if number modulo 2 is equals to 0
    return (numberToCheck % 2 == 0) ? "even" : "odd";
}

void getName()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
}

void getBirthYear()
{
    int birthYear, age;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << endl;
    age = 2024 - birthYear;
    cout << "Your age is " << age << endl;
    cout << "In 10 years, you will be " << age + 10 << " yars old." << endl;
}

void getFavoriteNumbers()
{
    // Checking if the user wants to insert multiple numbers
    bool multipleNumbers = true, firstNumber = false;
    // Declare min, max, and counter initialized to 0 to only display odd vs even for the first number inserted
    int currentNumber, min, max, counter = 0;
    while (multipleNumbers)
    {

        cout << "Enter your favorite number: ";
        cin >> currentNumber;
        cout << endl;
        cout << "Would you like to insert another favorite number (y/n): ";
        cin >> answer;

        if (counter++ == 0)
        {
            min = currentNumber;
            max = currentNumber;
        }

        // Validate if the current number is higher or lower than the current values of max and min
        if (currentNumber > max)
        {
            max = currentNumber;
        }

        if (currentNumber < min)
        {
            min = currentNumber;
        }

        // If answer given is n then stop the loop
        if ((answer == 'n' || answer == 'N'))
        {
            multipleNumbers = false;
        }
    }
    cout << "The highest favorite number entered is " << max << "." << endl;
    cout << "The lowest favorite number entered is " << min << "." << endl;
}

void getBasicInfo()
{
    // Declaring variables
    string name;
    int number, age;

    // Requesting inputs
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your favorite number: ";
    cin >> number;

    // Checking if number is odd or even
    string oddEven = oddOrEven(number);
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    cout << "Your favorite number is " << number << " which is " << oddEven << endl;

    // Printing if odd or even
    if (oddEven == "odd")
    {
        cout << "The cube of your favorite number is " << pow(number, 3) << endl;
    }
    else
    {
        cout << "The square of your favorite number is " << pow(number, 2) << endl;
    }
}

int main()
{
    int option;
    // Give options in menu
    cout << "Please select one option:" << endl
         << "1 - General information" << endl
         << "2 - Age information" << endl
         << "3 - Favorite number" << endl;
    cin >> option;

    // Switch the option chosen
    switch (option)
    {
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
