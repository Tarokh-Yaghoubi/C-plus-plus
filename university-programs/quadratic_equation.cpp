#include <iostream>
#include <cmath>

/*
    Tarokh (Jacob) , Yaghoubi - Solve the Quadratic Equation

*/

using namespace std;

int main()
{
    double a, b, c;
    double discriminant, root1, root2;


    cout << "Enter Coefficients a , b and c :";
    cin >> a >> b >> c;


    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and different " << endl;
        cout << "Root 1 " << root1 << endl;
        cout << "root 2 " << root2 << endl;

    } 
    else if (discriminant == 0)
    {
        root1 = (-b / (2 * a));

        cout << "Roots are real and same : " << endl;
        cout << "Root1 = Root2 = " << root1 << endl;
    }
    else
    {
        double realPart = (-b / (2 * a));
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex and different : " << endl;
        cout << "Root 1 " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "Root 2 " << realPart << "-" << imaginaryPart << "i" << "\n";
    } 

    system("pause");
    return 0;
}