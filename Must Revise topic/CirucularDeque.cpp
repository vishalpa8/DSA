#include<iostream>
using namespace std;


class MyCircularDeque {
public:
    int *arr;
    int front,rear,k,cnt;
    MyCircularDeque(int k) {
        arr = new int[k];
        this->k = k;
        front = k-1, rear = 0;
        cnt = 0;
    }
    
    bool insertFront(int value) {
       if(cnt == k){
           return false;
       }
       arr[front] = value;
       front = (front - 1 + k) % k;
       ++cnt;
       
        return true;
    }
    
    bool insertLast(int value) {
        if(cnt == k){
            return false;
        }
        arr[rear] = value;
        rear = (rear + 1) % k;
        ++cnt;

        return true;
    }
    
    bool deleteFront() {
        if(cnt == 0){
            return false;
        }

        front = (front + 1) % k;
        --cnt;

        return true;
    }
    
    bool deleteLast() {
        if(cnt == 0){
            return false;
        }
        rear = (rear - 1 + k) % k;
        --cnt;
        return true;
    }
    
    int getFront() {
        if(cnt == 0){
            return -1;
        }
        return arr[(front + 1) % k];
    }
    
    int getRear() {
        if(cnt == 0){
            return -1;
        }
        return arr[(rear - 1 + k) % k];
    }
    
    bool isEmpty() {
        return cnt == 0;
    }
    
    bool isFull() {
        return cnt == k;
    }
};

int main(){
    int k = 5;
    
    MyCircularDeque* obj= new MyCircularDeque(k);
    int value;

    for(int i=0; i<k; i++){
        cin >> value;
        bool param_1 = obj->insertFront(value);
        bool param_2 = obj->insertLast(value);
        bool param_3 = obj->deleteFront();
        bool param_4 = obj->deleteLast();
        int param_5 = obj->getFront();
        int param_6 = obj->getRear();
        bool param_7 = obj->isEmpty();
        bool param_8 = obj->isFull();

        // utilise that value to do whatever you want.
    }


   
  
}
 