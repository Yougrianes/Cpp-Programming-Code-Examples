#include <iostream>
#include <typeinfo>
#include <list>
#include <vector>
#include <deque>
#include <ctime>

using namespace std;

template <typename T>
void joseph(T collection, int n, int m)
{
	if(n < 1 || m < 1)
	{
		cout << "Error init m || n." << endl;
		return;
	}
	
	// init container.
	for(int i = 1; i <= n; i++)
	{
		collection.push_back(i);
	}
	
	//
	class T::iterator iter=collection.begin(), del;
	int counter = 1;
	
	// set timer.
	clock_t start = clock(), finish;
	while(collection.size() > 1)
	{
		while(counter % m == 0 && collection.size() > 1)
		{
			counter = 1;
			if(typeid(collection) != typeid(list<int>))
			{
				iter = collection.erase(iter);
			}
			else
			{
				del = iter;
				iter++;
				collection.erase(del);
			}
			if(iter==collection.end())
			{
				iter = collection.begin();
			}
		}
		counter++;
		iter++;
		if(iter==collection.end())
		{
			iter = collection.begin();
		}
	}
	finish = clock();
	cout << "Final person: " << *iter << endl;
	cout << "Using container: " << typeid(collection).name() << ", time cost: " << 1.0 * (finish - start) / CLOCKS_PER_SEC << "Sec." << endl;
}

int main()
{
	list<int> il;
	vector<int> iv;
	deque<int> id;
	joseph(il, 10000, 5);
	joseph(iv, 10000, 5);
	joseph(id, 10000, 5);

	return 0;
}
