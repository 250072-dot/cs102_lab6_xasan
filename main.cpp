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
     */


     return 0;
 }