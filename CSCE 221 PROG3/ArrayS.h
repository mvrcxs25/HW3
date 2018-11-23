#ifndef Array_S_H
#define Array_S_H

#include<queue>
#include<vector>


using namespace std;




template <class Type>
class ArrayS
{
private:
	int n;
	int i;
	int Front;
	int Rear;
	
	vector<queue<int>> ArrS;
	


public:

	ArrayS(void)
	{
		n = 100;
		i = 0;
		Front = 0;
		Rear = 0;

		ArrS.resize(1000);
		 
	}

	~ArrayS(void)
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

		while (ArrS[i].empty()) {
			
			i++;
		}
		int Temp = ArrS[i].front();
		ArrS[i].pop();
		return Temp;

	}

	void insert(Type e, int p)  // Adds an element e to rear of queue
	{
		if (p > n-1)
		{
			return;
		}

		else
		{
			ArrS[p] = queue<int>(); // add a queue
			ArrS[p].push(e);
		}

	}

};




#endif