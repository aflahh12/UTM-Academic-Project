#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void listItem(int d[], int listSize) {
    for (int x = 0; x < listSize; x++) {
        cout << d[x] << " ";
    }
    cout << "\n";
}

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int d[], int listSize) {
	for(int pass = 1; pass < listSize; pass++){
		for(int x = 0; x < listSize-1; x++){
			cout << "compare " << x << " - " << x+1 << endl;
		
			if (d[x] > d[x+1]){
				cout << d[x] << ">" << d[x+1] << "(swap)\n";
			
				int temp = d[x];
				d[x] = d[x+1];
				d[x+1] = temp;
			
				listItem(d, 4);
			}
		}
	}
}

// Main function section
int main() {
  //int data[4] = {12, 8, 3, 21}; // average case
  int data[4] = {21, 12, 8, 3}; // worst case
  //int data[4] = {3, 8, 12, 21}; // best case
  
  //manual bubble sort 
  cout << "The original list: ";
  listItem(data, 4);
  cout << "Pass 1\n";
  BubbleSort(data, 4);
  cout << "The list after pass 1: ";
  listItem(data, 4);
  
  cout << "Pass 2\n";
  BubbleSort(data, 4);
  cout << "The list after pass 2: ";
  listItem(data, 4);
  
  cout << "Pass 3\n";
  BubbleSort(data, 4);
  cout << "The list after pass 3: ";
  
  return 0;
}
