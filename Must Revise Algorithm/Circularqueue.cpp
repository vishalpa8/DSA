#include<iostream>
#include<vector>
using namespace std;


class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        q = new int[k];
        cnt = 0;
        sz = k;
        headIdx = 0;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
       
        q[(headIdx + cnt) % sz] = value;
        cnt += 1;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        headIdx = (headIdx + 1) % sz;
        cnt -= 1;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return q[headIdx];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return q[(headIdx + cnt - 1) % sz];
    }
    
    bool isEmpty() {
        return cnt == 0;
    }
    
    bool isFull() {
        return cnt == sz;
    }
    
private:
    int cnt, sz, headIdx;
    int *q;
};


int main(){
    int k = 5;
    int value;

    for(int i=0; i<k; i++){
        cin >> k;        
        MyCircularQueue* obj = new MyCircularQueue(k);
        bool param_1 = obj->enQueue(value);
        bool param_2 = obj->deQueue();
        int param_3 = obj->Front();
        int param_4 = obj->Rear();
        bool param_5 = obj->isEmpty();
        bool param_6 = obj->isFull();
        
    }
}

