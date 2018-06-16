#include <iostream>

using namespace std;

//n |0|1|2|3| 4|  5|  6|   7|    8|     9|     10|
//n!|1|1|2|6|24|120|720|5040|40320|362880|3628800|

int factorial(int n)
{
   if(n == 0 || n == 1)
   {
       //cout << n << "!: 1" << endl;
       n = 1;
   }else{
       int b=1;
       for(int i = 1; i <= n; ++i)
       {
           b *= i;
       }
       //cout << n << "!: " << b << endl;
       n = b;
   }
   return n;
}

int main(){
    int a;
    cout << "Enter namber:" << endl;
    cin >> a;
    cout << a << "!: " << factorial(a) << endl;
   	system("pause");
	return 0;
}
