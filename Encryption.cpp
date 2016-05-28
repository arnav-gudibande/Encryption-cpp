#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string dict = "abcdefghijklmnopqrstuvwxyz";


void encrypt(string ciph, string dic) {
	int index;
	for(int i=0; i<ciph.size(); i++) {
		index = dict.find(ciph.substr(i, 1));
		string rep = dic.substr(index, 1);
		cout << rep;
	}

}


int main() {
	int tN;
	cin >> tN;
	for(int i=0; i<tN; i++) {
		string cipD;
		cin >> cipD;
		int mes;
		cin >> mes;

		for(int z=0; z<mes; z++) {
			string ciph;
			cin >> ciph;
			encrypt(ciph, cipD);
		}

	}

}
