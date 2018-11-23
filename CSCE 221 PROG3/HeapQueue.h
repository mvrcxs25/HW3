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
		max = 10000; // array starts at max size of 1000
		que = new int[10000];
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

			bubbleDown(0);

			return bottom;
		}
		
	}
	

	Type insert(int p) {
		if (max == sizeCurr)
			return 0;

		sizeCurr++;
		int temp = sizeCurr - 1; // total 
		que[temp] = p;

		bubbleUP(sizeCurr - 1);

	}

	void bubbleUP(Type t){
		// If parent of entire array
		if(sizeCurr == 0)
			return;

		// Get value of parent index of item to bubble up
		int parentT = (t-1)/2;

		// If parent is greater than child
		if(que[parentT] > que[t])
		{
			// Swap values
			int temp = que[parentT];
			que[parentT] = que[t];
			que[t] = temp;
			bubbleUP(parentT);
		}

	}

	void bubbleDown(Type t){
		// Get children of t and save t
		int leftChildIndex = 2*t + 1;
		int rightChildIndex = 2*t + 2;
		int smallest = t;

		if (leftChildIndex < sizeCurr && que[leftChildIndex] < que[t])
			smallest = leftChildIndex;

		if (rightChildIndex < sizeCurr && que[rightChildIndex] < que[smallest])
			smallest = rightChildIndex;

		if (smallest != t) {
			int temp = que[t];
			que[t] = que[smallest];
			que[smallest] = temp;
			bubbleDown(smallest);
		}
	}


};
#endif