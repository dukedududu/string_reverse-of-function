//����һ���ַ����������е��ַ������������������LIGHT, ���THGIL��Ҫ����string������
//�ַ�������ֱ��cout���  �����ľͲ����� ��Ϊ�Ҳ���������

//˼·һ������ѭ�����鵹�����
//˼·����reverse����ת�ַ���������string��׼�����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << "������һ���ַ�����" << endl;
	cin >> str1;
	reverse(str1.begin(), str1.end());
	cout << "���������" << str1;
	return 0;
}