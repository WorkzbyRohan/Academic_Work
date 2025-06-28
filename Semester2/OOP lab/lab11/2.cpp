//#include<iostream>
//using namespace std;
//
//class totalarea {
//protected:
//    int area;
//
//public:
//    totalarea() {
//        area = 0;
//    }
//
//    void setarea(int g) {
//        area = g;
//    }
//
//    void print() {
//        cout << "Area=" << area << endl;
//    }
//};
//
//class circle : public totalarea { 
//private:
//    int radius;
//
//public:
//    circle() {
//        radius = 0;
//    }
//
//    circle(int r) {
//        radius = r;
//    }
//
//    void calculateArea() { // Renamed area() to calculateArea()
//        int g = 3 * radius * radius;
//        setarea(g); // Corrected the call to setarea()
//    }
//
//    void printArea() { // Renamed print() to printArea()
//        cout << "circle";
//            print(); // Calls the print() function of totalarea class
//    }
//};
//class rectangle :public totalarea
//{
//private:
//        int l;
//    int w;
//public:
//    rectangle()
//    {
//        l = 0;
//        w - 0;
//    }
//    rectangle(int l1, int w1)
//    {
//        l = l1;
//        w = w1;
//    }
//    void calculatearea()
//    {
//        int s = l * w;
//        setarea(s);
//
//    }
//    void printArea() { // Renamed print() to printArea()
//        cout << "recatangle  ";
//                   print(); // Calls the print() function of totalarea class
//    }
//
//
//
//};
//
//int main() {
//    circle c(5);
//    c.calculateArea(); // Calculate the area of the circle
//    c.printArea(); // Print the area
//    rectangle r1(6, 9);
//    r1.calculatearea();
//    r1.printArea();
//
//}
