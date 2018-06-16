#include <iostream>

using namespace std;

//n |0|1|2|3| 4|  5|  6|   7|    8|     9|     10|
//n!|1|1|2|6|24|120|720|5040|40320|362880|3628800|

int factorial(int n)
{
    return((n>1) ? n*factorial(n-1) : 1);
}

int main(){
    int a;
    cout << "Enter namber:" << endl;
    cin >> a;
    cout << a << "!: " << factorial(a) << endl;
   	system("pause");
	return 0;
}
