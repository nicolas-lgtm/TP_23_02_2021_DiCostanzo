#include "Header.h"
#include "GW.h"
#include "UC.h"
#include "King.h"
#include "Queen.h"


void MapExample();
void QueueExample();

bool canPlay421 = true;

void main() {
	InitGame();

	system("pause");
}

void InitGame() {
	player = new Player(10000);
	CreateAllPNJ();
}

void CreateAllPNJ() {
	int nbGW = 10;
	int nbUC = 5;

	for (int i = 0; i < nbGW; i++)
	{
		GW* gw = new GW();
		allPNJ.push_back(gw);
		cout << gw->GetIsDead() << endl;
	}

	for (int i = 0; i < nbUC; i++)
	{
		UC* uc = new UC();
		allPNJ.push_back(uc);
	}

	King* king = new King();
	allPNJ.push_back(king);//KING

	Queen* queen = new Queen();
	allPNJ.push_back(queen);//QUEEN
}

void GetRandomEncounter() {
	int e = rand() % allPNJ.size();


}

bool PlayerWin421() {
	canPlay421 = false;

	bool playerWin;
	bool gameContinu;

	//Dés joueur
	int playerD1;
	int playerD2;
	int playerD3;

	//Dés adversaire
	int opponentD1;
	int opponentD2;
	int opponentD3;

	while (gameContinu) {
		playerD1 = rand() % 6 + 1;
		playerD2 = rand() % 6 + 1;
		playerD3 = rand() % 6 + 1;

		opponentD1 = rand() % 6 + 1;
		opponentD2 = rand() % 6 + 1;
		opponentD3 = rand() % 6 + 1;

		if (playerD1 == 4 && playerD2 == 2 && playerD3 == 1) {
			gameContinu = false;
			playerWin = true;
		}
		else if (opponentD1 == 4 && opponentD2 == 2 && opponentD3 == 1) {
			gameContinu = false;
			playerWin = false;
		}
	}

	return playerWin;
}


































//
//void MapExample() {
//	map<string, int> Mymap;
//
//	Mymap.insert(pair<string, int>("test1", 1));
//	Mymap.insert(pair<string, int>("test2", 22));
//	Mymap.insert(pair<string, int>("test3", 333));
//	Mymap.insert(pair<string, int>("test4", 4444));
//	Mymap.insert(pair<string, int>("test5", 55555));
//	Mymap.insert(pair<string, int>("test6", 666666));
//
//	map<string, int>::iterator it = Mymap.begin();
//
//
//	while (it != Mymap.end()) {
//		string key = it->first;
//		int value = it->second;
//
//		cout << "key: " + key + " value: " + to_string(value) << endl;
//
//		it++;
//	}
//}
//
//void ShowQueue(queue<int> a_queueToShow) {
//	while (!a_queueToShow.empty()) {
//		cout << "size: " << a_queueToShow.size()
//			<< " front value: " << a_queueToShow.front()
//			<< " back value: " << a_queueToShow.back() << endl;
//		
//		//'pop' enlève la valeur placée en tête de queue
//		a_queueToShow.pop();
//	}
//}
//
//void QueueExample() {
//	queue <int> myQueue;
//
//	myQueue.push(0);
//	myQueue.push(1);
//	myQueue.push(2);
//	myQueue.push(3);
//	myQueue.push(4);
//	myQueue.push(5);
//
//	queue<int> queueToSwap;
//	queueToSwap.push(10);
//	queueToSwap.push(21);
//	queueToSwap.push(32);
//	queueToSwap.push(43);
//	queueToSwap.push(54);
//	queueToSwap.push(65);
//
//	
//	// 'swap' Echange valeurs entre deux queues
//	myQueue.swap(queueToSwap);
//
//	ShowQueue(myQueue);
//	ShowQueue(queueToSwap);
//}