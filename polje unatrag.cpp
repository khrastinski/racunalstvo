#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	int polje[5]={12,13,14,15,16};
	int x;
	for (x=4;x>-1;x=x-1)
	{
		cout<<polje[x]<<endl;
	}
	system ("Pause");
	return 0;
	
}
