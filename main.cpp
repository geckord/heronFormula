#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double side1, side2, side3, s, area;
    cout << "Enter the lenght of the sides of your triangle:" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    cout << "Your triangle's area is " << area << endl;
    cout << "If you got a -nan, that means that the side lenghts you entered can't form a proper triangle";

    return 0;
}
