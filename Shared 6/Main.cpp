#include <iostream>
#include <vector>

int main() {
	int n, m;
	std::cin >> n;

	std::vector<int> vin;
	std::vector<int> vout(n);

	while (n != 0) {
		std::cin >> m;
		vin.push_back(m);
		n--;
	}

	for (int i = 0; i != (int)vin.size(); i++) {
		int n1 = vin[i] - 1;
		vout[n1] = i + 1;
		
	}

	for (int i = 0; i != (int)vout.size(); i++) {
		std::cout << vout[i] << " ";
	}



	std::cin >> m;


}