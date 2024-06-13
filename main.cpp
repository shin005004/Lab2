#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {

if(cnt == M){
	    for(auto i : vec) cout << i << ' ';
	    cout << endl;
	    return;
    }
    if(vec.empty()){
	    for(int i=1; i<=N; i++){
		    vec.push_back(i);
		    func(1);
		    vec.pop_back();
	    }
    }
    else {
	for(int i = vec.back()+1; i<=N; i++){
	   vec.push_back(i);
	   func(cnt+1);
	   vec.pop_back();
    	}
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
