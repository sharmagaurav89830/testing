//hhehehehehhe
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    for (int i=0; i<5;++i){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    for(int e : vec)
    {
        cout<<e<<" ";
    }
    system("pause");
    return 0;
}
