#include <iostream>
using namespace std;
int multiply(int num01);

main()
{ 
    int num01;
    int output;
    cout << "Enter Number: ";
    cin >> num01;

    output = multiply(num01);
    cout << "Output is: " << output << endl;   

}

  int multiply(int num01)
 {
  int result = num01 * 5;
  return result;
 }
