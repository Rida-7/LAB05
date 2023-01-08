#include <iostream>
using namespace std;
bool symmetry(int num01);

main()
{
   int input;
   int result;
 
   cout << "Enter number: ";
   cin >> input;
   
  result = symmetry(input);
   if (result == true)
  {   
   cout << "Number is  symmetrical.";
  }
   if (result == false ) 
  {
   cout << "Number is not symmetrical.";
  }

}

bool symmetry(int num01)
{
  int rem01 = num01 % 10;
  int div01 = num01 / 10;
  int rem02 = div01 % 10;
  int div02 = div01 / 10;
  int rem03 = div02 % 10;

  if (rem01 == rem03)
 {
  return true;
 }
  if (rem01 != rem03)
 {
  return false;
 }
}