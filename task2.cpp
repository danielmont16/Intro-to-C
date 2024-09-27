#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Task 2: Financial Calculator Application

int main()
{

    double mountly_invest, y_i_rate, fV, fV1, c_salary, net_salary, net_salary1, salary_in, salary_in1;
    int n_years;
    bool flag = true;
    bool flag1 = true;
    char user_answer;

    // Montly Investment Calculator
    while (flag)
    {

        cout << "Enter your montly investment: ";

        while (!(cin >> mountly_invest) || mountly_invest <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error please check the input value" << endl;
            cout << "Enter your montly investment: ";
        }

        cout << "Enter yearly interest rate (in %): ";

        while (!(cin >> y_i_rate) || y_i_rate <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error please check the input value" << endl;
            cout << "Enter yearly interest rate (in %): ";
        }

        cout << "Enter number of years: ";

        while (!(cin >> n_years) || n_years <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error please check the input value" << endl;
            cout << "Enter number of years: ";
        }

        cout << endl;

        for (int i = 1; i <= n_years; i++)
        {

            fV = (mountly_invest * pow((1 + (y_i_rate / 100)), i));
            fV1 = round(fV * 100) / 100;
            cout << "Year " << i << " future value: $" << fV1;
            cout << endl;
        }

        cout << endl;
        cout << "Do you want to enter another investment scenario? (y/n) :";
        cin >> user_answer;

        if (tolower(user_answer) == 'n')
        {
            flag = false;
        }
    }

    cout << endl;
    // Salary Calculation
    while (flag1)
    {

        cout << "Enter current salary: ";

        while (!(cin >> c_salary) || c_salary <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error please check the input value" << endl;
            cout << "Enter current salary: ";
        }

        net_salary = c_salary * 0.87;
        net_salary1 = round(net_salary * 100) / 100;

        cout << "Net Salary after 13% tax: $" << net_salary1 << endl;
        cout << endl;

        cout << "Enter the numbers of years you have been working at the company: ";

        while (!(cin >> n_years) || n_years <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error please check the input value" << endl;
            cout << "Enter the numbers of years you have been working at the company: ";
        }
        // Salary increase evaluation
        if (n_years > 5)
        {
            salary_in = c_salary * 1.20;
            salary_in1 = round(salary_in * 100) / 100;
            cout << "Congratulations! You have been aproved for a salary increase." << endl;
            cout << "Your new salary is: $" << salary_in1;
            cout << endl;
            flag1 = false;
        }
        else
        {
            cout << "You are not entitled to a salary increase." << endl;
            cout << endl;
            flag1 = false;
        }
    }

    return 0;
}