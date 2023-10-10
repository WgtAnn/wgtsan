#include<iostream>
using namespace std;
int main()
{
	int a[50000], n,tmp;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < n; j++) {
				if (a[j] > a[j + 1]) {
					tmp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tmp;
				}
			}
		}
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
}
