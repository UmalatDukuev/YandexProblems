#include <iostream>
#include <algorithm>
#include <vector>    



int min1(int n, int *mas) {
	
	std::vector<int> united = {0, 1, n-2, n-1};
	int sum = 0;
	sum = mas[1] - mas[0] + mas[n - 1] - mas[n - 2];
	switch (n)
	{
	case 2:
		return mas[1] - mas[0];
	case 3:
		return mas[2] - mas[0];
	case 4:
		return mas[3] - mas[2] + mas[1] - mas[0];
	case 5:
		int a = min(mas[3] - mas[2], mas[2] - mas[1];);
		return mas[3] - mas[2] + mas[1] - mas[0] + a;
	default:
		sum = mas[n-1] - mas[n-2] + mas[1] - mas[0];
		
		for (int i = 2; i < n - 3; i++) {

			auto it = std::find(united.begin(), united.end(), i);
			if (it != united.end()) {
				continue;
			}
			else {

				if (mas[i] - mas[i - 1] <= mas[i + 1] - mas[i])
				{
					sum += mas[i] - mas[i - 1];
					united.push_back(i);

				}
				else {
					sum += mas[i + 1] - mas[i];
					united.push_back(i);

				}
			}
			
		}
		for (int i = 0; i < united.size(); i++) {
			std::cout << united[i] << " ";
			return sum;
		}
	}
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

	//sum = min1(n, mas);

	//std::cout << sum ;
	//for (int i = 2; i < 3; i++) {
	//	std::cout << "111111111111";
	//	return sum;
	//}
	return 0;
}