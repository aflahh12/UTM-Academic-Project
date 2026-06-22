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

void merge(int d[], int first, int mid, int last) {
    cout << "merge: " << first << "-" << mid << " and " << mid + 1 << "-" << last << "\n";

    int tempArray[10];
    
    // 1st half of array index
    // it may refer to the index in the middle of the array


    // 2nd half of array index

    
    // set the index as the first1 here because we will keep increasing the first1 value in the next loop
    // index refers to the location of tempArray to copy item to from the 1st/2nd half of the array


    // compare each item in both array and copy the correct item into temp array
    

    // iterate and copy the rest of items in the 1st half of array (if any) to temp array


    // iterate and copy the rest of items in the 2nd half of array (if any) to temp array


    // copy all items from temp array to the original array


}

void MergeSort(int d[], int first, int last) {
    // do play with these parameters to apply the insertion sort: 
    // first, last, mid
    // ???
    int mid = (first + last)/

    //cout << "first: " << first << "\n";
    //cout << "mid: " << mid << "\n";
    //cout << "last: " << last << "\n";

    // only make recursive call if can split the array into two halves
    // cout << "MergeSort (left): " << first << ", " << mid << "\n";
    // cout << "MergeSort (right): " << mid + 1 << ", " << last << "\n";
    // ???
}

void MergeSortV2(int d[], int first, int last) {
    // do play with these parameters to apply the insertion sort: 
    // first, last, mid 
    // also try call merge function here
    
}



// Main function section
int main() {
  int data[5] = {8, 1, 4, 3, 2};
  int data[5] = {}; // example of the final two halves array
  
  cout << "The original array content: ";
  listItem(data, 5);

  //MergeSort(data, 0, 4);
  //MergeSortV2(data, 0, 4);


  cout << "The array content after merge sort: ";
  listItem(data, 5);
}

