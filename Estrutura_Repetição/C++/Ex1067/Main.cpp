#include <iostream>

int main(){
	
	int n = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i+=2){
		std::cout << i << std::endl;
	}

	return 0;
}