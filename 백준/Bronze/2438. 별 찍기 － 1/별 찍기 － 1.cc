#include <iostream>
using namespace std;
int main()
{
	int a;   
	cin >> a;                                    
	for (int i = 1; i < a +1; i++)                 
	{
		for (int j = 0; j < i; j++) 
		{
			cout << "*";
		}
		cout << endl;
	}
}