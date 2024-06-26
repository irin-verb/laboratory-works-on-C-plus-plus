#include <iostream> 

//���������� �������� ���������
#include <set>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1251");

	// ��������� ���������
	set<int> intSet1;
	
	// ��������� ���� �������, ��� ��������� ����� ������ �������������
	intSet1.insert(9);
	intSet1.insert({8,8,7,7,1,1,1,3,3,3,6,6,6});
	
	//������� �������� ����� range-for. � ��������� �������� ��������������� ���������� ��������
	for(auto& item : intSet1 )
		cout << item << " ";
	cout << endl; 
	
	multiset<int> intSet2({8,7,1,2,3,8,8,4,4,4,3,2}); // ����� ����� ���������������� ������� �������������
	
	// ���������� �������� ����� ����� ����� ���������
	// � multiset �������� ���������
	for(auto it = intSet2.cbegin(); it != intSet2.cend(); ++it)
		cout << *it << " ";
	cout << endl; 
	cout << endl;	
	
	 // �������� ������� �� ���������
	intSet1.erase(6);
	for(auto& item : intSet1 ) cout << item << " ";
	cout << endl;
	
	intSet2.erase(8); //� multiset ������� ��� ������� � ���� ���������
	for(auto& item : intSet2 ) cout << item << " ";
	cout << endl;
	
	//�������� ���������� ��������� � ������� ���������
	cout << "���-�� �������� 4:"<< intSet2.count(4) << endl;
	
	//����� ������ ��������� �������� 4
	// � ������ ����� - ������������ �������� �� ������ ��������, 
	// � ������ ������� - ������������ �������� �� ����� end()
	auto it = intSet2.find(4); 
	if(it != intSet2.end())
	{
		intSet2.erase(it); // ������� �� ���������
		
		// ��� ������������� ����������� ��������� ����������������
		// ������� ����� ���������� ������ �� ���� ������� ++ ��� --
		// �.�. �� ������������ �������� it + 3 ��������
		// ��� ������ �� ������� ���-�� ��������� ����� ������������
		// std::advance(), ������� �������� ����� ��� ��������� ��������� ��� ���������
		// ��� ������������� ����������� �������� ����� �������\�������� ��������� �� ��������������
		advance(it, -3);
		intSet2.erase(it); // ������� ��������� 2-��
	}
		
	for(auto& item : intSet2 ) cout << item << " ";
	cout << endl;
	cout << endl;


	// ��� ���������� ��������� ����� �������� ������� ����������
	set<int,greater<int>>	intSet3({1,9,6,2,3,4,8,9});
	for(auto& item : intSet3 ) cout << item << " ";
	cout << endl;
	
	//������� ��������� � �������� �� ������ ���������
	intSet3.clear();
	if(intSet3.empty()) 
		cout << "intSet3 ������!" << endl;
	
	return 0;
}

