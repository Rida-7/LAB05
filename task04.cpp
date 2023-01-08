#include <iostream>
using namespace std;
string oddishOrEvenish(int num01);

main()

{
  int num01;
  string number;
  cout << "Enter number: ";
  cin >> num01;

   number = oddishOrEvenish(num01);
   cout << "Number is " << number;

}

string oddishOrEvenish(int num01)
{
 int rem01,rem02,rem03,rem04,rem05;
 int div01,div02,div03,div04,div05;
 int check,output;
 string result;
 rem01=num01%10;
 div01=num01/10;
 rem02=div01%10;
 div02=div01/10;
 rem03=div02%10;
 div03=div02/10;
 rem04=div03%10;
 div04=div03/10;
 rem05=div04%10;
 div05=div04/10;

 check = rem01+rem02+rem03+rem04+rem05;
 output = check%2;

if (output == 0)
{
 return result = "evenish" ;

}
if (output != 0)
{
 return result = "oddish" ;
}
 


}