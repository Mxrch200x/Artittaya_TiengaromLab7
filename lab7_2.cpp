#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k, j = 0, num = 1, result = 0;
	cout << "Please input k: ";
	cin >> k;
	while(j < 5000){
		if(num < 10000){
			P[j] = num;
			num += 2;
		}
		j++;
	}
	if(k > 0){
		while(i < 5000){
			if(P[i]%k == 0){
				result = result - P[i];
			}else{
				result = result + P[i];
			}
			i++ ;
		}
		cout << "Result = " << result << endl;
	}else{
		cout << "Invalid input!!!";
	}
	return 0;
}
