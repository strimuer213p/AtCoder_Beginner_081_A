/*
問題文
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 各マスには 0 か 1 が書かれており、マス i には si が書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。
*/

#include<iostream>
#include<array>
#include<algorithm>

int main() {
	int num;
	std::array<int,3> ar;

	std::cin >> num;

	for(int i = 0; num != 0;i++) {
		ar[i] = num % 10;
		num /= 10;
	}

	std::cout<<std::count(ar.begin(), ar.end(), 1) << std::endl;

	return 0;
}