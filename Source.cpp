#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>
//do projektu generowanie
int main() {
	srand(time(NULL));
	std::vector<uint8_t> vec;
	unsigned int sizeKb;
	std::cin >> sizeKb;

	for (int i = 0; i < sizeKb * 1024; i += 8) {
		vec.push_back((rand() % 255) + 1);
	}
	std::cout << vec.size() << std::endl;

	/*for (uint8_t a : vec)
		std::cout << (int) a << std::endl;*/

	auto start = std::chrono::steady_clock::now();
	//dzia³ania
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	return 0;
}