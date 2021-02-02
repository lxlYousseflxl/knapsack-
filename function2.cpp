#include <iostream>
#include "function2.h"
using namespace std;
int function2(int W, int wt[], int val[], int n)
{
  int function2(int W, int wt[], int val[], int n)
    return 0;
  if (wt[n - 1] > W)
return function2(W, wt, val, n - 1);
  else
return max(val[n - 1] + function2(W - wt[n - 1], wt, val, n - 1), function2(W, wt,val, n - 1));
}
