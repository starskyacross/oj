#include <bits/stdc++.h>
using namespace std;
vector<int> lists;

/* ISBN号的识别码的判断 */
void tests() {
	int res = 0;
	for (int i = 1; i <= 9; i++)
		res += lists[i - 1] * i;
	res = res % 11;
	if (res == lists[9]) {
		cout << "Right" << endl;
	} else {
		cout << lists[0] << "-";
		for (int i = 1; i <= 3; i++)
			cout << lists[i];
		cout << "-";
		for (int i = 4; i <= 8; i++)
			cout << lists[i];
		cout << "-";
		if (res == 10) {
			cout << "X" << endl;
		} else {
			cout << res << endl;
		}
	}
}

int main() {
	int n;
	while (cin >> n) {
		while (n != 0) {
			string test;
			cin >> test;
			string p1 = test.substr(0, 1);
			string p2 = test.substr(2, 3);
			string p3 = test.substr(6, 5);
			string p4 = test.substr(12, 1);
			lists.push_back(int(p1[0]) - 48);
			for (int i = 0; i < p2.length(); i++)
				lists.push_back(int(p2[i]) - 48);
			for (int j = 0; j < p3.length(); j++)
				lists.push_back(int(p3[j]) - 48);
			if (p4 == "X") {
				lists.push_back(10);
			} else {
				lists.push_back(int(p4[0]) - 48);
			}
			tests();
			lists.clear();
			n--;
		}
	}
}



