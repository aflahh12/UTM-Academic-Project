// Lab 1 - SECJ2013 - 24251 (Lab1.cpp)
// Group Members:
// 1. NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG
// 2. AFIF SHAQIR IRFAN BIN ARQAM

#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"

using namespace std;

// main function
int main() {
    const int LIST_SIZE = 10;
    Student* studList[LIST_SIZE];
    string name;
    int cw, fe;
    int count = 0;
    
    fstream inFile("Marks.txt", ios::in);

    
    if(!inFile){
    	cout << "ERROR: Cannot open the file.\n";
    	return 1;
	}
	
	while(inFile >> name >> cw >> fe){
		if(count >= LIST_SIZE){
			cout << "Maximum students reached.\n";
			break;
		}
		
		studList[count] = new Student(name,cw,fe);
		count++;
	}
	
	inFile.close();
	
	cout << "Student mark info:\n";
	for(int i=0; i<count; i++){
		studList[i]->printInfo();
		cout << endl << endl;
	}
	
	fstream outFile("Results.txt", ios::out);
	if(!outFile){
		cout << "ERROR: Cannot open the file.\n";
		return 1;
	}
	
	cout << "Print and save results to file:\n";
	for(int i=0; i<count; i++){
		
		studList[i]->printResult();
		studList[i]->printResultFile(outFile);
		delete studList[i];
		cout << endl;
	}

	
	outFile.close();    
	
	return 0;  
}

                 
