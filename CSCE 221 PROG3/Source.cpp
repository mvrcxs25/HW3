#include<iostream>
#include"ArrayS.h"
#include"ArrayUN.h"
#include"HeapQueue.h"
#include"stopwatch.h"
using namespace std;



int main() {


	CStopWatch Timer;
	Timer.Reset(); //sets the stopwatch to 0

	int MAX = 10;
	
	ArrayS<int> ARR;

	for (int i = 0; i < MAX; i++) {
		ARR.insert(rand()% MAX ,rand() % MAX);
	}

	cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for sorted" << endl;
	Timer.Reset();

	for (int i = 0; i < MAX -1; i++) {
		ARR.removeMin();
	}



	cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for sorted" << endl;
	Timer.Reset();


	ArrayUN<int> ARRU;
	
	for (int i = 0; i < MAX; i++) {
		ARRU.insert(rand() % MAX , rand() % MAX);
	}

	cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for unsorted" << endl;
	Timer.Reset();


	for (int i = 0; i < MAX; i++) {
		cout << ARRU.removeMin() << endl;
	}

	cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for unsorted" << endl;
	Timer.Reset();

	

	HeapQueue<int> HeapQ;




	cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for heap" << endl;
	Timer.Reset();


	for (int i = 0; i < 4; i++) {
		cout << HeapQ.removeMin() << endl;
	}

	cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for heap" << endl;

	

	system("Pause");


	return 0;
}