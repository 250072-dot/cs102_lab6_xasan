#include <algorithm>
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

//problem 6
int Factorial(int at = 1) {
int fact = 1;
for (int i = 1; i <= at; i++) {fact =fact * i;}

return fact;}

//problem 7
int Gdc(int num1,int num2) {
     int numco = (num1>num2) ? num2 : num1;
     int gdc1 = 1;
     int factos = 1;
     for (int i = 1; i <= numco; i++) {
         factos = (num1%i == 0 && num2%i == 0)? i : factos;

         gdc1 = (gdc1 > factos)? gdc1 : factos;

     }
     return gdc1;
 }

     //problem 8
     void maxmin() {
     cout << "enter three numbers :";
     float num1, num2, num3;
    cin >> num1 >> num2 >> num3;
     float maxi = (num3 > ((num1>num2)?num1:num2))?num3 :(num1>num2)?num1:num2 ;
     float mine = (num3 < ((num1>num2)?num2:num1))?num3 :(num1>num2)?num2:num1 ;
     cout << "maximum = " << maxi << endl;
     cout << "minimum = " << mine << endl;
 }

// problem 9

         float sum(float son1, float son2) { cout <<son1+son2<<endl;}
         float subtract(float son1,float son2) {
             cout <<son1-son2<<endl;
         }
         float multiply(float son1,float son2) {
             cout <<son1*son2<<endl;
         }
         float divide(float son1,float son2) {
             if (son2 != 0) cout <<son1/son2<<endl;
             else {cout<<"error"<<endl;}
         }

    //problem 10

     int getTrangleNumber(int numbe2) {
         return numbe2*(numbe2+1)/2;
     }

    //problem 11
    void DesplayEven() {
     int anynum;
     cout << "enter a number :";
     cin >> anynum;
     while (anynum>0) {
         int lastnum = anynum%10;
         if (lastnum%2==0) {
             cout << lastnum <<" ";
         }
         anynum = anynum/10;
     }
 }

//problem 12
     int cubeOfDigits(int num23) {
      int cube=0;
     while (num23>0) {
         int lastnum = num23%10;
         cube += lastnum*lastnum*lastnum;
         num23 = num23/10;

     }
     if (cube == num23){ cout << "armstrong"<<endl;}
     else{cout << "not armstrong"<<endl;}
     return cube;
 }



     //problem 13
     void leap() {
         for (int i = 1983; i <= 1985;i++ ) {
             if (i%4 != 0){cout << i <<"-year has 28" <<endl;}
             else {cout << i <<"-year has 29"<<endl;}

         }
     }

    //problem 14
     float futinva(float invam,float monint, float numberye) {
     float over=invam*pow((1+monint),numberye);
     return over;
 }
int main() {
     //PROBLEM 1

    float x,y;
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

     int x1,y1;
    cin >> x1 >> y1;
    cout << swap(x1, y1)<<endl;

    //problem 6
     int son;
     cout << "enter the number:";
cin >> son;
  cout <<Factorial(son)<<endl;



 //problem 7
     cout << "enter two number , I find gdc: ";
     int n11,n21;
     cin >> n11 >> n21;
     cout <<"gdc of "<<n11<< " and "<<n21<<" is "<<Gdc(n11,n21)<<endl;


     //problem 8
     maxmin();

     // problem 9
      cout <<"calculyator: \n enter such : sum(x,y) subtract(x,y) multiply(x,y) divide(x,y)"<<endl;


     //problem 10
     int counnt;
    cout <<"enter trangle numbers number: ";
    cin >> counnt;
     for (int i = 1; i <= counnt; i++) {
         cout << getTrangleNumber(i)<<" ";
         if (i%5 == 0){cout<<endl;}
     }


     //problem 11
      DesplayEven();


     // problem 12
      cout <<"enter a number :";
     int numer23;
     cin>> numer23;
     cout << cubeOfDigits(numer23)<<endl;




     //problem 13
    leap();



     //problem 14
 float a, b,c;
     cout << "enter 3 numbers :";
     cin >> a >> b >> c;
     cout << futinva(a,b,c)<<endl;

     return 0;

 }