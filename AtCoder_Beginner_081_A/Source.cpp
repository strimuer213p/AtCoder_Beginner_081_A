/*
��蕶
���ʂ��N�� 1,2,3 �̔ԍ������� 3 �̃}�X����Ȃ�}�X�ڂ������Ă��܂��B �e�}�X�ɂ� 0 �� 1 ��������Ă���A�}�X i �ɂ� si ��������Ă��܂��B
���ʂ��N�� 1 �������ꂽ�}�X�Ƀr�[�ʂ�u���܂��B �r�[�ʂ��u�����}�X���������邩���߂Ă��������B
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