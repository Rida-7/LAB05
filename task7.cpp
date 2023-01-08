#include <iostream>
using namespace std;
main()
{

    float volumeOfPool;
    float flowRateOfPipe1;
    float flowRateOfPipe2;
    float workerAbsent;
    float poolFilled;
    float poolPercentage;
    float pipe1Percent;
    float pipe2Percent;
    float overflow;


  cout << "Enter Volume of Pool: " ;
  cin >> volumeOfPool;
  cout << "Enter flow rate of pipe 1: ";
  cin >> flowRateOfPipe1;
  cout << "Enter flow rate of pipe 2: ";
  cin >> flowRateOfPipe2;
  cout << "worker is absent: ";
  cin >> workerAbsent;







poolFilled = volumeOfPool - (workerAbsent*flowRateOfPipe1 +workerAbsent*flowRateOfPipe2);
poolPercentage= (poolFilled * 100) / volumeOfPool;
pipe1Percent= (flowRateOfPipe1 * 100) / volumeOfPool;
pipe2Percent= (flowRateOfPipe2 *100) / volumeOfPool;
overflow = - poolFilled;


if (overflow < volumeOfPool)
{
cout << "pool is "<< poolPercentage <<"% filled" << endl;
cout <<"pipe 1: " << pipe1Percent << "%" << endl;
cout <<"pipe 2: " << pipe2Percent << "%" << endl;
}


if (overflow >  volumeOfPool)
{
 cout << "for " << workerAbsent << " hours the pool overflows with " << overflow << " litres" << endl;
}
}





