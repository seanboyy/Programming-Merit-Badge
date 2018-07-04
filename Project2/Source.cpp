#include <iostream>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

void swap(int&, int&);

void selection_sort(vector<int>&);

int main(int argc, char**argv) {
	random_device generator;
	uniform_int_distribution<int> distribution(0, 100);
	vector<int> list;
	for (int i = 0; i < 10; ++i) {
		list.push_back(distribution(generator));
		cout << list[i] << ", ";
	}
	cout << endl;
	selection_sort(list);
	for (int i = 0; i < 10; ++i) {
		cout << list[i] << ", ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void selection_sort(vector<int>& in) {
	for (int i = 0; i < in.size() - 1; ++i) {
		int mindex = i;
		for (int j = i; j < in.size(); ++j) {
			if (in[j] < in[mindex]) {
				mindex = j;
			}
		}
		if (mindex != i) {
			swap(in[i], in[mindex]);
		}
	}
}