#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

static int solve() {
	int N;
	std::cin >> N;
	std::vector< std::pair<int,int> > v(N);
	for (int i=0; i<N; ++i) {
		std::cin >> v[i].first >> v[i].second;
	}
	std::sort( v.begin(), v.end() );
	int n=0;
	for (int i=0; i<N; ++i) {
		for (int j=i+1; j<N; ++j) {
			if ( v[i].second > v[j].second ) {
				++n;
			}
		}
	}
	return n;
}

int main () {
	int T;
	std::cin >> T;
	for (int x=1; x<=T; ++x) {
		std::cout << "Case #" << x << ": " << solve() << "\n";
	}
	return 0;
}
