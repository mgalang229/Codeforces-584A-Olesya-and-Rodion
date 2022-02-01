#include <bits/stdc++.h>

using namespace std;

string Convert(int n) {
	string temp = "";
	while (n > 0) {
		int digit = n % 10;
		temp += (1, (char) '0' + digit);
		n /= 10;
	}
	reverse(temp.begin(), temp.end());
	return temp;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	// if the no. of digits of t is greater than n, then the answer does not exist
	int digits = (int) log10(t) + 1;
	if (digits > n) {
		cout << -1 << '\n';
		return 0;
	}
	// otherwise, convert t to a string and add trailing zeroes depending on the needed value to fulfill n
	string s = Convert(t);
	for (int i = 0; i < n - digits; i++) {
		s += "0";
	}
	cout << s << '\n';
	return 0;
}
