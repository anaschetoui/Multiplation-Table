#include <iostream>
using namespace std;

void Header()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	
	cout << "\n____________________________________________________________________________________\n";
	
}
void Result()
{
	Header();
	for (int i = 1; i <= 10; i++)
	{
		if (i != 10)
		{
			cout << i << "  |";
		}
		else
		{
			cout << i << " |";
		}

		for (int j = 1; j <= 10; j++)
		{
			cout <<"\t" <<i * j;
			
		}
		cout << "\n";
		
	}
	

}

int main()
{
	Result();

	return 0;
}