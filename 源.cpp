//输入一个字符串，把其中的字符按逆序输出。如输入LIGHT, 输出THGIL。要求用string方法。
//字符串可以直接cout输出  其他的就不可以 因为找不到结束符

//思路一：利用循环数组倒序输出
//思路二：reverse（反转字符串函数）string标准库里的
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << "请输入一个字符串：" << endl;
	cin >> str1;
	reverse(str1.begin(), str1.end());
	cout << "逆序输出：" << str1;
	return 0;
}