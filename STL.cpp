#include<bits/stdc++.h>
using namespace std;

//Pairs
void pairs() {
    pair<int, int> p;
    cout<<"Enter the pair: ";
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first + p.second<<endl;

    pair<int, pair<int, int>> p1;
    cout<<"Enter nested pair : ";
    cin>>p1.first>>p1.second.first>>p1.second.second;
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int> arr[2];
    cout<<"Enter the pair array: ";
    cin>>arr[0].first>>arr[0].second>>arr[1].first>>arr[1].second;
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
}

//vectors
void vectors() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair <int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    cout<<vp[0].first<<" "<<vp[0].second<<endl;
    cout<<vp[1].first<<" "<<vp[1].second<<endl;
}

//list
void lists() {
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    cout<<l.front()<<" "<<l.back()<<endl;

    l.push_front(3);
    cout<<l.front()<<" "<<l.back()<<endl;
    l.emplace_front(4);
    cout<<l.front()<<" "<<l.back()<<endl;
}

//deque
void deques() {
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    cout<<d.front()<<" "<<d.back()<<endl;

    d.push_front(3);
    cout<<d.front()<<" "<<d.back()<<endl;
    d.emplace_front(4);
    cout<<d.front()<<" "<<d.back()<<endl;
}

//stack
void stacks() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}

//queue
void queues() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
}

//priority queue
void priorityQueues() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(12);
    pq.push(3);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;

    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(1);
    pqm.push(5);
    pqm.push(3);
    pqm.push(15);
    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;
    cout<<pqm.size()<<endl;
    cout<<pqm.empty()<<endl;
}
//sets
void sets() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i: s) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.count(2)<<endl;
    s.erase(3);
    for(auto i: s) {
        cout<<i<<" ";
    }  
    cout<<endl;
}

//multisets
void multisets() {
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i: s) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.count(2)<<endl;
    s.erase(s.find(2));
    for(auto i: s) {
        cout<<i<<" ";
    }  
    cout<<endl;
}

//map
void maps() {
    map<int, int> m;
    m[1] = 2;
    m[2] = 3;
    m[3] = 4;
    m[4] = 5;
    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.size()<<endl;
    cout<<m.empty()<<endl;
    cout<<m.count(2)<<endl;
    m.erase(3);
    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    map<pair<int, int>, int> mp;
    mp[{1, 2}] = 3;
    mp[{2, 3}] = 4;
    mp[{3, 4}] = 5;
    for(auto i: mp) {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }
    cout<<mp.size()<<endl;
    cout<<mp.empty()<<endl;
    cout<<mp.count({2, 3})<<endl;
    mp.erase({3, 4});
    for(auto i: mp) {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }
}

//comparator function
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first < p2.first) return true;
    if (p1.first > p2.first) return false;
    if (p1.second > p2.second) return true;
    return false;
}

//sort
void sort() {
    int arr[] = {11, 23, 3, 34, 15};
    sort(arr, arr+5);
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr, arr+5, greater<int>());
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    pair<int, int> p[] = {{1, 12}, {13, 4}, {13, 16}, {7, 8}};
    sort(p, p+4, comp);
    for(int i=0; i<4; i++) {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}

int main() {
    // pairs();
    // vectors();
    // lists();
    // deques();
    // stacks();
    // queues();
    // priorityQueues();
    // sets();
    // multisets();
    // maps();
    sort();
    return 0;
}
