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
	int temp;
	int size;
	

	int Arru[1000000];


public:

	ArrayUN(void)
	{
		n = 100;
		i = 0;
		temp = 0;
		size = 0;

		

	}

	~ArrayUN(void)
	{

	}



	Type removeMin() 				// Remove element at the front of the queue. An error occurs if the queue is empty.
	{
		i = 0;

		while (Arru[i] == NULL) {

			i++;
		}

		temp = Arru[i];
		Arru[i] = NULL;
		return temp;

	}

	Type insert(Type e, int p)  // Adds an element e to rear of queue
	{	
			Arru[size] = p;
			size++;

			return 0;
		
	}

};




#endif