#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<numeric>
#include<map>
using namespace std;
 int main(){
    map<string,string>my={{"india","delhi"},
    {"abc","xyz"},
    {"pqrs","jklm"}
    };
    cout<<"print the element into map"<<endl;
    for(const auto& x:my){
	
    cout<<x.first<<": "<<x.second<<endl;
    }
	return 0;

 }
