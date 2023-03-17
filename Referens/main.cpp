#include <iostream>


template<typename T>
void pswap(T* p1, T* p2) {
	T tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

}
template<typename T>
void refswap(T& ref1, T& ref2) {
	T tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;

}


int MX[10][2];
int& scnd_el(int index) {
	return MX[index][1];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	n = 5;
	int& refn = n;// ������ refn. ��������������� � ���������� n
	std::cout <<" refn ="<< refn << std::endl;
	refn++;
	std::cout << " refn =" << refn << std::endl;
	std::cout << " n =" << n << std::endl;

	// ������ � �������
	//n = 10; m = 16;
	//std::cout << n << ' ' << m << std::endl;
	////pswap(&n,&m)//��������, �� ��������. �.�. ���� ���������� ������
	//refswap(n,m);
	//std::cout << n << ' ' << m << std::endl;

	//������������ ������
	std::cout << " ���������� ������� \n";
	for (int i = 0; i < 10; i++) {
		std::cout << " ������� " << i + 1 << " -� ������� -> ";
		std::cin >> MX[i][0];
		scnd_el(i) = MX[i][0];
	}
	std::cout << " �������� ������ \n";
	for (int i = 0; i < 10; i++)
		std::cout << MX[i][0] << "\t" << scnd_el(i) << '\n';




	return 0;
}