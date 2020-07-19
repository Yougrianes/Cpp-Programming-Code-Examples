#include <vector>
#include <iostream>

using namespace std;

// a good manner.
typedef vector<int> iVector; 

int main()
{
	iVector iv;
	for(int i=0; i<20; i++)
	{
		iv.push_back(i);
		cout << "capacity: " << iv.capacity() << endl;
	}

	return 0;
}
