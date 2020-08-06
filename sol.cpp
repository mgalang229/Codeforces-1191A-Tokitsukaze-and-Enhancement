#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int x;
	cin >> x;
	int n1=(x+0)%4;
	int n2=(x+1)%4;
	int n3=(x+2)%4;
	if(n1==1)
		cout << "0 A";
	else if(n2==1) 
		cout << "1 A";
	else if(n3==1)
		cout << "2 A";
	else if(n1==3)
		cout << "0 B";
	else if(n2==3)
		cout << "1 B";
	else if(n3==3)
		cout << "2 B";
	else if(n1==2)
		cout << "0 C";
	else if(n2==2)
		cout << "1 C";
	else if(n3==2)
		cout << "2 C";
	else if(n1==0)
		cout << "0 D";
	else if(n2==0)
		cout << "1 D";
	else if(n3==0)
		cout << "2 D";
	cout << "\n";
}
