#include <iostream>
using namespace std;
char letter1(char word1);
char letter2(char word2);
main()
{
char character;
char result1, result2;
cout << "Enter Alphabet: ";
cin >> character;


result1 = letter1(character);
if (result1 != 0)
{
cout << "This is upper case character " << result1 ;
}



result2 = letter2(character);
if (result2 != 0)
{
cout << "This is lower case character " << result2;
}
}



char letter1(char word1)
{
if (word1 >= 'A' && word1 < 'Z')

{
return word1;
}
return 0;

}
 

char letter2(char word2)
{
 if (word2 >='a' && word2 < 'z')
{
 return word2;

}
return 0; 
}