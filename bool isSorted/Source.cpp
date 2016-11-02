////////////
//Anna Tran
//CS 172 Sec 1
//12.4
///////////

#include<iostream>
#include<string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)
//Go through array and compare minimums
		if (list[i+1] > list[i])
	return true;
		else
	return false;
}
int main()
{
	int iarray[] = { 5,4,3,2,1 };
	double darray[] = { 5.6,3.7,7.9,1,4.6 };
	string sarray[] = { "abc","def","ghi","jkl","mno" };
	cout << " iarray is sorted in ascending order " << boolalpha<<isSorted(iarray, 5) << endl;
	cout << " darray is sorted in ascending order  " << boolalpha<<isSorted(darray, 5) << endl;
	cout << " sarray is sorted in ascending order " << boolalpha<<isSorted(sarray,5) << endl;
}
