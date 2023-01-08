#include <iostream>
using namespace std;
int add(int num01, int num02);
float divide(int num01, int num02);
int maximum(int num01, int num02);


main()
{
  int num01, num02, total;
  float division;
  int max;

  cout << "Enter number 01: ";
  cin >> num01;
  cout << "Enter number 02: ";
  cin >> num02;

  total = add(num01, num02);
  cout << "Sum is: " << total << endl;

  division = divide(num01, num02);
  cout << "Division is: " << division << endl;
  
  max = maximum(num01, num02);
  cout << " greater number is: " << max << endl; 
}

 int add(int num01, int num02)
{
      int sum = num01 + num02;
      return sum;

}

 float divide(int num01, int num02)
{

     float div = num01 / num02; 
     return div;

}

 int maximum(int num01, int num02)
{
 
     if (num01 < num02)
{
      return num02;
}
 
      if (num01 > num02)
{
     return num01;
}

   return 0;
}