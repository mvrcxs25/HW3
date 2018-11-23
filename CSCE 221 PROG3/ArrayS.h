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
	
	int Arrs[1000000];
	
public:

	ArrayS(void)
	{
		
		n = 100;
		i = 0;
		Front = 0;
		Rear = 0;

		 
	}

	~ArrayS(void)
	{
		
	}



	Type removeMin() 				
	{
		i = 0;

		while (Arrs[i] == NULL) {
			i++;
		}

		int temp = Arrs[i];
		Arrs[i] == NULL;
		return temp;

	}

	void insert(Type e, int p) 
	{
		Arrs[p] = p;

	}

};




#endif