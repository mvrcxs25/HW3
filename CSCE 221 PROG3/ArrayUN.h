#ifndef Array_UN_H
#define Array_UN_H

#include<queue>
#include<vector>


using namespace std;




template <class Type>
class ArrayUN
{
private:
	int n;
	int i;
	int Front;
	int Rear;
	int v = 0;

	vector<queue<int>> VecU;

public:

	ArrayUN(void)
	{
		n = 100;
		i = 0;
		Front = 0;
		Rear = 0;

		VecU.resize(1000);

	}

	~ArrayUN(void)
	{

	}

	int size(void)				// Return the size of queue
	{
		return n;
	}

	Type front() 				// Return, but do not remove, a reference to the front ele- ment in the queue; an error occurs if the queue is empt
	{
		return Front;
	}

	Type removeMin() 				// Remove element at the front of the queue. An error occurs if the queue is empty.
	{
		i = 0;

		while (VecU[i].empty()) {

			i++;
		}

		int Temp = VecU[i].front();
		VecU[i].pop();
		return Temp;

	}

	void insert(Type e, int p)  // Adds an element e to rear of queue
	{
		if (p > n - 1)
		{
			return;
		}

		else
		{
			//if there is no priority value in V for p. Then creates a new value for p inside of V. 
			if (VecU[p].empty()) {
				VecU.push_back(queue<int>());
				VecU[p].push(e);
				v++;
			}
			else {
				VecU[p].push(e);
			}
		}

	}

};




#endif