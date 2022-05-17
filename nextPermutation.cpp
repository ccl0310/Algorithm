#include <bits/stdc++.h>
using namespace std;

bool nextPermutation(vector<int> &x){
	for(int i=x.size()-1;i>=1;i--){
		if (x[i] > x[i-1]){
			int target = i;
			int Min = x.size()+1;
			for(int k=i;k<x.size();k++){
				if (x[k] > x[i-1]){
					Min = min(x[k],Min);
				}
			}
			while(x[target]!=Min){
				target++;
			}
			swap(x[i-1],x[target]);
			reverse(x.begin()+i,x.end());
			return true;
		}
	}
	return false;
}

int main(){
	vector<int> x{1,2,3,4};
	do {
		for(int a:x){
			cout << a << " ";
		}
		cout << endl;
	} while(nextPermutation(x));
}
