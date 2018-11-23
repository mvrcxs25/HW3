#ifndef Prio_QUEUE_H
#define Prio_QUEUE_H


int Size = 0;





 

 class PrioQueue {

 private:

	 struct Node {
		 int data;
		 int priority;
		 struct Node* next;
		 Node* prev;

	 };


	 Node* newNode(int d, int p)
	 {
		 struct Node* temp = new Node;
		 temp->data = d;
		 temp->priority = p;
		 temp->next = NULL;

		 return temp;
	 };



	 int Size = 0;		
	 
 public:

	 PrioQueue(void)
	 {
		 Node* Front = NULL;			//Keeps track of the front node( for dequeue)
		 Node* Rear = NULL;
		 Node* newNode = new Node();
		
	 }

	 ~PrioQueue(void)
	 {}

	 bool empty(void)
	 {
		 return(Size == 0);
	 }

	 int size(void)
	 {
		 return Size;
	 }


	 void enqueue(Node** head, int d, int p)
	 {
		 Node* front  = (*head);	
		 Node* temp = newNode(d, p);

		// Case that there is no priority wih this number, Makes a new node and enqueues the value.
		 if ((*head)->priority > p) {

			 // Insert New Node before head 
			 temp->next = *head;
			 (*head) = temp;
		 }
		 else {
			 //finds where to place based off of priority
			 while (front->next != NULL && front->next->priority < p) {
				 front = front->next;
			 }
			 temp->next = front->next;
			 front->next = temp;
		 }
	 }

	 int removeMin(Node** head)
	 {
		 Node* temp = *head;
		 *head = (*head)->next;
		 return temp->data;

	 }


 };


#endif