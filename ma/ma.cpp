#include <iostream>
#include <locale.h>


void fibonacci(int f) {
	int n = 1, k = 1, m = 0;
	while (m < f) {
		m = n + k;
		n = k;
		k = m;
	}
	if (m == f or f == 1) {
		std::cout << "Фибоначчи" << std::endl;
	}
	else {
		std::cout << "Увы" << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	std::cout << "N = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		int f;
		std::cout << "f = ";
		std::cin >> f;
		fibonacci(f);
	}
}