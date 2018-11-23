#include<iostream>
#include <fstream>
#include<string>
#include"ArrayS.h"
#include"ArrayUN.h"
#include"HeapQueue.h"
#include"stopwatch.h"
using namespace std;



int main() {
	
	
	/*
		There are two main parts to this program. The first is the assignement in which the program will read in a few numbers and then 
		print them ot the screen. In this case I just went ahead and added cout, which will show the number once the program reads the file. 
		The second part is the program in which I used to test the speed of the run times. There are a total of 5 stomachwatch resets. Each list 
		or heap have their own times, regarding their correspondng functioning run times.	
	
	*/
	
	int T;
	int elements;
	int x;
	int MAXX = 100;

	
	ArrayS<int> ARR;
	ArrayUN<int> ARRU;
	HeapQueue<int> HeapQ;

	/*

	// reading file 
	ifstream myfile;	
	myfile.open("numbers.txt");
	myfile >> x;
	cout << x << endl;
	myfile >> x;
	T = x;
	elements = x;
	while (!myfile.eof()) {
		if (T == 0) {	//Unsorted
			for (int i = 0; i < elements; i++) {
				ARR.insert(x, x);
				cout << x << endl;
			}
		}
		else if (T == 1) {	//Sorted
			for (int i = 0; i < elements; i++) {
				ARRU.insert(x, x);
				cout << x << endl;
			}
		}

		else {	//T == 2; Heap
			for (int i = 0; i < elements; i++) {
				HeapQ.insert(x);
				cout << x << endl;
			}

		}
	}

		myfile.close();

		for (int i = 0; i < elements; i++) {
			if (T == 0) {	//Unsorted
				cout << ARR.removeMin() << endl;

			}
			else if (T == 1) {	//Sorted
				cout << ARRU.removeMin() << endl;
			}

			else {	//T == 2; Heap
				cout << HeapQ.removeMin() << endl;

			}

		}



		*/



		

		CStopWatch Timer;
		Timer.Reset(); //sets the stopwatch to 0


		// For the list based sorted functions
	
		for (int i = 0; i < MAXX; i++) {
			ARR.insert(rand()% 101 ,rand() % 101);
		}

		cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for sorted" << endl;
		Timer.Reset();

		for (int i = 0; i < MAXX -1; i++) {
			ARR.removeMin();
		}


		cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for sorted" << endl;
		Timer.Reset();


		
		//For the list based unsorted functions


		for (int i = 0; i < MAXX ; i++) {
			ARRU.insert(rand() % 101 , rand() % 101);
		}

		cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for unsorted" << endl;
		Timer.Reset();


		for (int i = 0; i < MAXX - 1; i++) {
			ARRU.removeMin();
		}

		cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for unsorted" << endl;
		Timer.Reset();

		// For the array based heap implementation

		for (int i = 0; i < MAXX; i++) {
			HeapQ.insert(rand() % 101);
		}
		cout << "It took " << Timer.GetElapsedSeconds() << " To finish inserting for heap" << endl;
		Timer.Reset();



		for (int i = 0; i < MAXX - 1; i++) {
			HeapQ.removeMin();
		}
		cout << "It took " << Timer.GetElapsedSeconds() << " To finish removing for heap" << endl;
		Timer.Reset();
		

		system("Pause");


		return 0;
	}