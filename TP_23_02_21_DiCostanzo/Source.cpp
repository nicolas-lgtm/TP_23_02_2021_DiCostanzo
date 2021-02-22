#include "Header.h"
void MapExample();
void QueueExample();

void main() {
	QueueExample();

	system("pause");
}

void MapExample() {
	map<string, int> Mymap;

	Mymap.insert(pair<string, int>("test1", 1));
	Mymap.insert(pair<string, int>("test2", 22));
	Mymap.insert(pair<string, int>("test3", 333));
	Mymap.insert(pair<string, int>("test4", 4444));
	Mymap.insert(pair<string, int>("test5", 55555));
	Mymap.insert(pair<string, int>("test6", 666666));

	map<string, int>::iterator it = Mymap.begin();


	while (it != Mymap.end()) {
		string key = it->first;
		int value = it->second;

		cout << "key: " + key + " value: " + to_string(value) << endl;

		it++;
	}
}

void ShowQueue(queue<int> a_queueToShow) {
	while (!a_queueToShow.empty()) {
		cout << "size: " << a_queueToShow.size()
			<< " front value: " << a_queueToShow.front()
			<< " back value: " << a_queueToShow.back() << endl;
		
		//'pop' enlève la valeur placée en tête de queue
		a_queueToShow.pop();
	}
}

void QueueExample() {
	queue <int> myQueue;

	myQueue.push(0);
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);
	myQueue.push(4);
	myQueue.push(5);

	queue<int> queueToSwap;
	queueToSwap.push(10);
	queueToSwap.push(21);
	queueToSwap.push(32);
	queueToSwap.push(43);
	queueToSwap.push(54);
	queueToSwap.push(65);

	
	// 'swap' Echange valeurs entre deux queues
	myQueue.swap(queueToSwap);

	ShowQueue(myQueue);
	ShowQueue(queueToSwap);
}