#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

#if 0
string reverse(string &s){
	int start = 0;
	int end = s.size() - 1;
	while (start < end){
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	return s;
}
int main(){
	string s;
	getline(cin, s);
	cout << reverse(s) << endl;
	return 0;
}
#endif

/*
void bubble_sort(int a[], int size){
	for (int i = 0; i < size-1; ++i){
		for (int j = 0; j < size-1-i; ++j){
			if (a[j]>a[j + 1]){
				swap(a[j], a[j + 1]);
			}
		}
	}
}
*/


int main(){
	int a[] = { 1, 0, 2, 9, 8, 3, 4, 7, 6, 5 };
	int size = sizeof(a) / sizeof(a[0]);
	//bubble_sort(a, size);
	for (int i = 0; i < size; ++i){
		cout << a[i] << endl;
	}
	return 0;
}