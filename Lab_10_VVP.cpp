using namespace std;
#include <iostream>

int main()
{
    cout << "Hello World!\n";
    cout << "1 Task\n";
    cout << "Check if 'a>2' and 'b<=3'\n";
    cout << "Please enter a ";
    double a;
    cin >> a;
    cout << "         and b ";
    double b;
    cin >> b;
    if ((a > 2) and (b <= 3)) cout << "true\n";
    else cout << "false\n";

    cout << "2 Task\n";
    cout << "Check if 'a<b<c'\n";
    cout << "Please enter a ";
    double a1;
    cin >> a1;
    cout << "         and b ";
    double b1;
    cin >> b1;
    cout << "         and c ";
    double c1;
    cin >> c1;
    if ((a1 < b1) and (b1 < c1)) cout << "true\n";
    else cout << "false\n";

    cout << "3 Task\n";
    cout << "Check if number contains 2 digits and is even\n";
    cout << "Please enter number ";
    int num;
    cin >> num;
    if (num % 2 == 0 and trunc(num / 100) == 0) cout << "true\n";
    else cout << "false\n";

    cout << "4 Task\n";
    cout << "Check if digits of 3 digit number placed by increase or dicrease\n";
    cout << "Please enter 3 digit number ";
    int num1;
    cin >> num1;
    int dig1, dig2, dig3;
    dig1 = trunc(num1 / 100);
    dig2 = trunc(num1 / 10);
    dig2 = dig2%10;
    dig3 = num1 % 10;
    if ((dig1)<(dig2) and (dig2)<(dig3) or (dig1)>(dig2) and (dig2)>(dig3)) cout << "true\n";
    else cout << "false\n";

    cout << "5 Task\n";
    cout << "Check if 4 digit number is palindrome or not\n";
    cout << "Please enter 4 digit number ";
    int num2;
    cin >> num2;
    int dig1_1, dig2_1, dig3_1, dig4_1;
    dig1_1 = trunc(num2 / 1000);
    dig2_1 = trunc(num2 / 100);
    dig2_1 = dig2_1 % 10;
    dig3_1 = trunc(num2 / 10);
    dig3_1 = dig3_1 % 10;
    dig4_1 = num2 % 10;
    if (dig1_1 == dig4_1 and dig2_1 == dig3_1) cout << "true\n";
    else cout << "false\n";

    cout << "6 Task\n";
    cout << "Check if triangle with sides 'a' 'b' 'c' is right\n";
    cout << "Please enter a = ";
    int a3;
    cin >> a3;
    cout << "             b = ";
    int b3;
    cin >> b3;
    cout << "             c = ";
    int c3;
    cin >> c3;
    if (c3 * c3 == a3 * a3 + b3 * b3 or a3 * a3 == b3 * b3 + c3 * c3 or b3 * b3 == a3 * a3 + c3 * c3) cout << "true\n";
    else cout << "false\n";

    cout << "7 Task\n";
    cout << "Check if triangle with sides 'a' 'b' 'c' exists\n";
    cout << "Please enter a = ";
    int a2;
    cin >> a2;
    cout << "             b = ";
    int b2;
    cin >> b2;
    cout << "             c = ";
    int c2;
    cin >> c2;
    if (a2 < b2 + c2 and b2 < a2 + c2 and c2 < a2 + b2) cout << "true\n";
    else cout << "false\n";

}