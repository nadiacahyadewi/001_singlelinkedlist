#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
}; 

Node* START = NULL;

void addnote() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NiM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

}