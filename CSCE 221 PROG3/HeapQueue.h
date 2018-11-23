#ifndef Heap_QUEUE_H
#define Heap_QUEUE_H

#include<queue>
#include<vector>

using namespace std;


template <class Type>
class HeapQueue
{
private:

	int *que; // Pointer to element 
	int max; // Max size of array
	int sizeCurr;  //current size in array



public:
	HeapQueue() {
		max = 1000; // array starts at max size of 1000
		que = new int[1000];
		sizeCurr = 0; //current value is 0

	
		
	}

	~HeapQueue() {

	}

	bool empty() {
		return (sizeCurr == 0);
	
	}

	Type removeMin() {
		{
			// atleast one variable
			if (sizeCurr == 0)
				return 0;

			// one variable 
			int bottom = que[0];
			que[0] = que[sizeCurr - 1];
			sizeCurr = sizeCurr - 1;

			return bottom;
		}
		
	}
	

	Type insert(int p) {
		if (Max == sizeCurr)
			return 0;

		sizeCurr++;
		int temp = sizeCurr - 1; // total 
		que[temp] = p;

		while (temp != 0 && que[(temp - 1) / 2] > que[temp]) {
			swap(que[(temp - 1) / 2] > que[temp]);
			temp = (temp - 1) / 2;
			

		}
		return temp;



	}
};
#endif