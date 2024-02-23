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

int main() {
    pairs();
    vectors();
    lists();
    deques();
    stacks();
    queues();
    priorityQueues();
    return 0;
}
