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

void InsertionSort(int d[], int listSize) {
    // do play with these parameters to apply the insertion sort: 
    // pass, insertIndex, item
    int pass, insertIndex, item;

    for (pass = 1; pass < listSize; pass++ ){
    	insertIndex = pass;
    	
    	cout << "Pass " << pass << "\n";
    	cout << "The insertion start at: " << pass << "\n";
    	
    	while (insertIndex > 0 ){
    		cout << "Current insertIndex: " << insertIndex << "\n";
    		insertIndex--;
		}
		
		//after quit the internal while loop insertIndex may equal to 0
		cout << "Current insertIndex: " << insertIndex << "\n";
	}

}

void InsertionSortV2(int d[], int listSize) {
    // do play with these parameters to apply the insertion sort: 
    // pass, insertIndex, item
    int pass, insertIndex, item;

    for (pass = 1; pass < listSize; pass++ ){
    	item = d[pass];
    	insertIndex = pass;
    	
    	cout << "Pass " << pass << "\n";
    	cout << "The insertion start at: " << pass << "\n";
    	cout << "Try to insert " << item << " at the correct place\n";
    	
    	while (insertIndex > 0 ){
    		cout << "Current insertIndex: " << insertIndex << "\n";
    		cout << "Insert " << d[insertIndex-1] << insertIndex
    		d[insertIndex] = d[insertIndex-1];
    		
    		listItem(d, 4);
    		
    		insertIndex--;
		}
		
		//after quit the internal while loop insertIndex may equal to 0
		cout << "Current insertIndex: " << insertIndex << "\n";
		cout << "Insert " << item << "\n";
		d[insertIndex] = item;
		listItem(d, 4);
	}

}

// Main function section
int main() {
  // all below are in the context of sort in ascending order (bubble sort)
  int data[4] = {12, 3, 8, 21}; // average case
  //int data[4] = {21, 12, 8, 3}; // worst case
  //int data[4] = {3, 8, 12, 21}; // best case
  
  cout << "The original array content: ";
  listItem(data, 4);

  InsertionSort(data, 4);

  cout << "The array content after insertion sort: ";
  listItem(data, 4);
}
