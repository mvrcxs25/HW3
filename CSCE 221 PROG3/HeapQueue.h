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

			bubbleDown(0);

			return bottom;
		}
		
	}
	

	void insert(int p) {
		if (Max == sizeCurr)
			return 0;

		sizeCurr++;
		int temp = sizeCurr - 1; // total 
		que[temp] = p;

		bubbleUP(sizeCurr - 1);

	}

	void bubbleUP(Type t){
		// If parent of entire array
		if(index == 0)
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
			BubbleUp(parentT);
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

		if (smallest != i) {
			swap(&que[i], &que[smallest]);
			bubbleDown(smallest);
		}
	}


};
#endif