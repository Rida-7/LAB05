#include <iostream>
#include <cmath>
using namespace std;

float quadPlus(float a, float b, float c);
float quadMinus(float a, float b, float c);

main()
{
   float a;
   float b;
   float c;
   float x1, x2;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >> b;
    cout <<"Enter c: ";
    cin >> c;


     x1 = quadPlus(a, b, c);
     cout << "1st value of x is: " << x1 << endl;

     x2 = quadMinus(a, b, c);
     cout << "other value of x is: " << x2 << endl;

}

float quadPlus(float a, float b, float c)
{ 
  float x1;
  float power = pow (b, 2);
  float dis = power - 4*a*c;
  float squareRoot = sqrt (dis);
  float numer = -b + squareRoot;
  float deno = 2*a;
  x1 = numer / deno;
  return x1;
}

float quadMinus(float a, float b, float c)
{
float x2;
  float power = pow (b, 2);
  float dis = power - 4*a*c;
  float squareRoot = sqrt (dis);
  float numer = -b - squareRoot;
  float deno = 2*a;
  x2 = numer / deno;
  return x2;
}