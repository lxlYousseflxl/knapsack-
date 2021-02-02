#include "function2.h"
#include"function.h"


int main(){
int val [] = {60, 100, 120};
int wt[] =  {10, 20,30};
int w =50;
int n = sizeof(val) / sizeof(val[0]);
cout << function2(w, wt, val, n);
return 0;

}
