#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v(5,20);  
v.push_back(1);
vector<int>::iterator X = v.begin();
for(int i; i<v.size();i++){
cout<< *(X) <<" " <<endl;
  X++;}
vector<int>::iterator x = v.end();
for(int i; i<=v.size();i++){
    --x;
    cout<< *x << " ";
}
for(auto w : v){
    cout << w << " T";
}

return 0;
}


