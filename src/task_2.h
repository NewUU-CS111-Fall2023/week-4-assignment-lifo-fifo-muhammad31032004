#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {

    int N;
    cin >> N;
    deque<int> track_1;
    for(int i=0;i<N;i++) {
        int m;
        cin>>m;
        track_1.push_front(m);
    }

    deque<int> dead_end;
    deque<int> track_2;

    int k=1;
    int l=1;
    bool flag= true;
    int count_in=0;
    int count_out=0;
    while(flag){
        if(k==track_1.front()){
            count_in++;
            k++;
        }

        dead_end.push_front(track_1.front());
        track_1.pop_front();
        if(track_1.empty()){
            flag= false;
        }
        if(dead_end.back()==l){
            track_2.push_back(dead_end.back());
            dead_end.pop_back();
            count_out++;
            l++;
        }

    }
    if(dead_end.empty()){
        cout<<"possible";
    } else{
        cout<<"not possible";
    }

}