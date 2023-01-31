#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));

	char arrayNum[5] = { '1', '2', '3', '4','5'};
	int RanIndex = rand() % 5;
	int i;

	while (true)
	{
		int RanIndex = rand() % 5;
		cout << "Enter Num : ";
		cin >> i;

		if (i == RanIndex) {
			cout << "\t*************************";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t**        You Win      **";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t**                     **";
			cout << "\t*************************";
			cin >> i;
			break;
		}
		else
		{
			cout << "Ops .. \n\nNum is = " << RanIndex<<"\n\n";
		}

	}

	
}