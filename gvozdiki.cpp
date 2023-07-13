#include <iostream>
#include <algorithm>
#include <vector>    



int min1(int *mas) {

	return mas[0];
}


int main()
{
	int n = 0, sum = 0;

	std::cin >> n;

	int* mas = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> mas[i];

	}
	std::sort(mas, mas + n);

	//for (int i = 0; i < n; i++) {
	//	std::cout << mas[i] << " ";
	//}
	

	sum = mas[1] - mas[0] + mas[n-1] - mas[n-2];

	//if (n > 2) {
	//	for (int i = 2; i < n-1; i++) {
	//		sum += std::min(mas[i] - mas[i - 1], mas[i + 1] - mas[i]);
	//	}
	//}
	sum = min1(mas);

	std::cout << sum << " ";
	return 0;
}