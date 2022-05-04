// Malcolm Case
// COSC-1437
// Professor McMillan
// Built 05/04/2022
// This program solves the Tower of Hanoi puzzle + a simple recursive math problem.

#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char fromRod, char toRod, char exRod)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    towerOfHanoi(n - 1, fromRod, exRod, toRod);
    cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl;
    towerOfHanoi(n - 1, exRod, toRod, fromRod);
  }
}

void recursion(int n, int x)
{ 
  if (n==0)
  {
    cout << x;
    return;
  }
  else
  {
    x = x*n ;
    recursion(n-1, x);
    return;
  }
}

int main()
{
  int n;
  int x = 1;
  cout << "Please enter number of rods for Tower of Hanoi\n";
  cin >> n;
  cout << endl;
  towerOfHanoi(n, 'A', 'C', 'B');

  //Recursion is when a function calls itself within the same function...
  //Examples include the towerOfHanoi and recursion functions above...
  
  cout << endl << "Recursion problem: ";
  for ( int i = 0; i < n; i++ )
    {
      cout << n-i;
      if (i != n-1)
      {
        cout << " * ";
      }
      else
      {
        cout << " = ";
      }
    }
  recursion(n, x);
  cout << endl;

  return 0;
}