#include <iostream>
#include <cmath>
using namespace std;

main()
{

  int num1, num2;
  int maximum, minimum;
  int power;
  int squareRoot;
  int cubeRoot;

  float num3;
 int ceil, floor;
  cout << "enter number: ";
  cin >> num1;
  cout << "enter number: ";
  cin >> num2;
  cout << "enter number: ";
  cin >> num3;

  maximum = max(num1, num2);
  cout << "greater number is: " << maximum << endl;
  
  minimum = min(num1, num2);
  cout << "smaller number is: " << minimum << endl;

  power = pow(num1, num2);
  cout << "power: " << power << endl;

  squareRoot = sqrt(num1);
  cout << "square root is: " << squareRoot << endl;

  cubeRoot = cbrt(num2);
  cout << "cube root is : " << cubeRoot << endl;

  num01 = ceil(num3);
  cout << "result for ceil is : " << num01 << endl;
 
  num02 = floor(num3);
  cout << "result for floor is : " << num02 << endl;
}