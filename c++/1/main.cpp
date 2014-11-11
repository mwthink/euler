#include <iostream>
int main(){
	using namespace std;
	int sum=0;
	for( int a = 0; a < 1000; a = a + 1 ){
		if (a%3 == 0 || a%5 == 0){
			sum = sum+a;
		}
	}
	cout<< sum;
}
