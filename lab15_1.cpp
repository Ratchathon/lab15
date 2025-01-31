#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
	char &c = b;
    int *x = &a;
    char *y = &b;
    int *z = x;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<<z<<endl;
	cout<<&a<<" "<<&b<<" "<<&c<<" "<<&x<<" "<<&y<<" "<<&z<<endl;
	
	
	return 0;
}