/*********************************************************************
** Author: Afiq Husyairi
** Date: 11 December 2020
** Description: Statistics homework
** Input: series of integers
** Output: mean and standard deviation
********************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

double calcMean (int list[], int size)
{

  int total = 0;
  double mean;
  for (int i = 0; i < size; i++)
    total += list[i];

  mean = (double) total / size;

  return mean;
}

double calcStdDev (int list[], int size, double mean)
{

  double totalSqr = 0;
  double stdDev;
  for (int i = 0; i < size; i++)
    {
      totalSqr += pow ((list[i] - mean), 2);
    }
  stdDev = sqrt (totalSqr / size);

  return stdDev;
}

main (){

  int list[10];
  double mean;
  cout << "Enter 10 integers : ";
  for (int i = 0; i < 10; i++)
    cin >> list[i];

  cout << "The mean is " << calcMean (list, 10) << endl;
  cout << "The standard deviation is " << calcStdDev (list, 10, mean);


  return 0;
}
