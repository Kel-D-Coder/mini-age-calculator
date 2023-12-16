#include <iostream>

using namespace std;

int main() {

    int year;
    int age;
    int result;
    string again;

    int cal = 01;

    while (cal) {
        cout << "Enter 1 to get your age or 2 to get your year of birth:" ;
        cin >> cal;
        if (cal == 1) {
            cout << "Enter your year:";
            cin >> year;
            result = 2023 - year;
            cout << "You are " << result << "years old" << endl;
        } else if (cal == 2) {
            cout << "Enter your age:";
            cin >> age;
            result = 2023 - age;
            cout << "You were born in the year " << result << endl;
        }

        cout << "You wanna calculate again? (Yes or No):";
        cin >> again;

        if (again == "yes") {
            continue;
        } else {
            break;
        }

    }

    cout << "Thanks for using our little app 😊";

    return 0;
}