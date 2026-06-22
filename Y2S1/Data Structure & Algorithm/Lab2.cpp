// Lab 2 - SECJ2013 - 24251 (Lab2.cpp)
// Group Members:
// 1. AFIF SHAQIR IRFAN BIN ARQAM A23CS0204
// 2. NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG A23CS0252

#include <iostream>
#include <string>

using namespace std;

void printStar(int n) {
	
     if(n>0){
         cout << "*";
         printStar(n-1);
     }
}

void printNum(int n,int start=1) 
	{
           
    if (start<=n)
	{
		cout<<start<<"-";
		printStar(start);
		cout<<endl;
		printNum(n,start+1);
	}
    }


int totalOdd(int list[], int n,int start=0) 
{
	if (start<n){
		if(list[start]%2!=0)
		{
		cout<<list[start]<<" ";
		return list[start] + totalOdd(list,n,start+1);
		}
	else{
		return totalOdd(list,n,start+1)-list[start];
	}
	}
}

// Main function
int main(int argc, char *argv[])
{
    printNum(6);

    cout << "\n\n";

    int num[6] = {0, 1, 2, 3, 4, 5};
    int result = totalOdd(num, 6);
    cout << "= " << result << endl;
    return 0;
}

