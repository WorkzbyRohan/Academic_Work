#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    int s;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    s = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
  s=s*1/2;
    if (s == 0) {
        cout << "Points are collinear" << endl;
    } else {
        cout << "Points are non-collinear" << endl;
    }

    return 0;
}
