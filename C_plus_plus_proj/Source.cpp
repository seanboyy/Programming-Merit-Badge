#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	cout << "Hello world" << endl;
	string a;
	for (int i = 0; i < 10; ++i) {
		cin >> a;
		if (a == "hello") {
			cout << "oof" << endl;
		}
		else {
			cout << "also oof" << endl;
		}
	}
	system("pause");
	return 0;
}