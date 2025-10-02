#include <iostream>
#include <cmath>
using namespace std;

//FUNCTOINS FOR PROBLEMS

// problem 1
 float product (float a, float b) {
return a * b;}

//problem 2
void lineracceleration() {
     float v1,v2,t;
     cout << "enter the value of v1 :";
     cin >> v1;
     cout << "enter the value of v2 :";
     cin >> v2;
     cout << "enter the value of t :";
     cin >> t;
     cout << "a="<< float(v2-v1)/t << endl;
 }

//problem 3
void fun() {
     float radius;
     cout << "enter the radius :";
     cin >> radius;
     float area,circum;
     float PI = 3.14159;
     area = product (radius ,radius )*PI;
     cout << "area is " << area << endl;
     circum = 2 * PI * radius;
     cout << "circumference is " << circum << endl;
 }


//problem 4
     void fun1() {
     float a, b;
     cout << "enter ther value of a:";
     cin >> a;
     cout << "enter the value of b:";
     cin >> b;
     cout << "area is " << product (a, b) << endl;
     cout << "perimeter is " << 2*(a+b )<< endl;
 }

// problem 5
    int swap(int a1, int b1) {
    return b1," ",a1;
}


int main() {
     //PROBLEM 1

 /*    float x,y;
     cout << "Enter x: ";
     cin >> x;
     cout << "Enter y: ";
     cin >> y;
     cout << "product: " << product (x,y )<< endl;
     cout << "rounded: "<< int(product(x,y))<<endl;


     //problem 2
     lineracceleration();


     //problem 3
     fun();


     //problem 4
     fun1();

     //problem 5
     */
     int x1,y1;
    cin >> x1 >> y1;
    cout << swap(x1, y1)<<endl;

     return 0;
 }