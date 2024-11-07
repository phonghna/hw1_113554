#include <bits/stdc++.h>
using namespace std;
 
void interLeaveQueue(queue<int>& q)
{
    if (q.size() % 2 != 0)
        cout << "Input even number of integers." << endl;
 
    queue<int> temp;
    int halfSize = q.size() / 2;
 
    for (int i = 0; i < halfSize; i++) {
        temp.push(q.front());
        q.pop();
    }
 
    while (!temp.empty()) {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
}
 
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    interLeaveQueue(q);
    int length = q.size();
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
