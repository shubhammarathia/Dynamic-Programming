#include <iostream>
#include <bitset>
using namespace std;

int main()
{
int number;
cin>>number;
bitset <4> bin(number);
//cout<<bin;
cout<<bin.size()<<endl;
return 0;
}

