#include <algorithm>
#include <array>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
using ll = long long;
using pint = pair<int, int>;
using pll = pair<ll, ll>;

constexpr double EPS = 1e-7;
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
#define PI (acos(-1))

constexpr int MOD = 1e9 + 7;

int main(int argc, char const *argv[]) {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);

	map<string, int> m;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (m.count(s) > 0) {
			m[s]++;
		} else {
			m[s] = 1;
		}
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (m.count(s) > 0) {
			m[s]--;
		} else {
			m[s] = -1;
		}
	}

	int v_max = -INF;
	for (auto &&i : m) {
		if (i.second > v_max) {
			v_max = i.second;
		}
	}

	cout << max(v_max, 0)
		 << endl;
	return 0;
}
