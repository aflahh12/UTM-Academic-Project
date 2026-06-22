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

void SelectionSort(int d[], int listSize) {
		//play with last,largestIndex and p
		
		int pass=1;
		for (int last=listSize-1; last>=1; last--){
			cout << "Pass " << pass << "\n";
			cout << "The current last index to place the item: " << last << "\n";
		
		int largestIndex=0;
		
		for(int p=1; p<=last; p++){
			cout << "Compare item at " << largestIndex << " with item at " << p << "\n";
		}
		
		pass++;
		}
}

void SelectionSortV2(int d[], int listSize) {
		//play with last,largestIndex and p
		
		int pass=1;
		for (int last=listSize-1; last>=1; last--){
			cout << "Pass " << pass << "\n";
			cout << "The current last index to place the item: " << last << "\n";
		
		int largestIndex=0;
		
		for(int p=1; p<=last; p++){
			cout << "Compare item at " << largestIndex << " with item at " << p << "\n";
			cout << "Compare item " << d[largestIndex] << " and " << d[p] << "\n";
		
			if (d[largestIndex] > d[p]){
				largestIndex=p;
				cout << "Change the largestIndex now at " << largestIndex << "\n";
			}
		}
		
		// complete the inner loop, put the largestIndex item at the correct place
		cout << "swap item" << d[largestIndex] << " and " << d[last] << "\n";
		swap(d[largestIndex], d[last]);
		listItem(d,4);
		
		cout << "\n";
		pass++;
		}
}

void SelectionSortV3(int d[], int listSize) {
    // play with last, largestIndex, and p
    int pass = 1;
    for (int last = listSize - 1; last >= 1; last--) {
        cout << "Pass " << pass << "\n";
        cout << "The current last index to place the item: " << last << "\n";
        
        int largestIndex = 0;
        
        for(int p = 1; p <= last; p++){
        	cout << "Compare item " << d[largestIndex] << " and " << d[p] << "\n";
			cout << "Compare item " << d[largestIndex] << " and " << d[p] << "\n";
			
			if (d[largestIndex] < d[p]){
				largestIndex = p;
				cout << "The largestIndex now at " << largestIndex << "\n";
			}
		}
		
		//complete the inner loop, put the largestIndex item at the correct place (last)
		if(largestIndex != last){
			cout << "swap item " << d[largestIndex] << " and " << d[last] << "\n";
			swap(d[largestIndex], d[last]);
		}

		listItem(d, 4);
		cout << endl;
        
        pass++;
    }
}

// Main function section
int main() {
  // all below are under the context or sort in ascending order (bubble sort only)
  //int data[4] = {3, 8, 12, 21}; // best case
  //int data[4] = {12, 3, 8, 21}; // average case
  int data[4] = {21, 12, 8, 3}; // worst case
  
  cout << "The original list: ";
  listItem(data, 4);

  SelectionSortV3(data, 4);

}

