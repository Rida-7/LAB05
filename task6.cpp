#include <iostream>
using namespace std;
string text1(int num1);
string text2(int num2);
main()
{
int number;
int num1,num2;
string a,b;

cout << "enter Number: ";
cin >> number;

num1 = number % 10;
num2 = number / 10;

if (number <10)
{
a = text1(num1);
cout << a;
}
if (number >= 10)
{
a = text1(num1);
b = text2(num2);
cout << b << " " << a;
}




}
string text1(int num1)
{
if (num1 == 1){return "one";}
if (num1 == 2){return "two";}
if (num1 == 3){return "three";}
if (num1 == 4){return "four";}
if (num1 == 5){return "five";}
if (num1 == 6){return "six";}
if (num1 == 7){return "seven";}
if (num1 == 8){return "eight";}
if (num1 == 9){return "nine";}


}







string text2(int num2)
{
if (num2 == 1){return "ten";}
if (num2 == 2){return "twenty";}
if (num2 == 3){return "thirty";}
if (num2 == 4){return "forty";}
if (num2 == 5){return "fifty";}
if (num2 == 6){return "sixty";}
if (num2 == 7){return "seventy";}
if (num2 == 8){return "eighty";}
if (num2 == 9){return "ninety";}

}

