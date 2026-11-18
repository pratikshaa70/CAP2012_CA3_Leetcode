#include <queue>
using namespace std;

class MyStack {
    queue<int> q;

public:
    MyStack() {
        
    }

    void push(int x) {
        q.push(x);

        int size = q.size();

        for (int i = 0; i < size - 1; i++) {
            int a = q.front();
            q.pop();
            q.push(a);
        }
    }

    int pop() {
        int a = q.front();
        q.pop();

        return a;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        if (q.empty()) {
            return true;
        }
        return false;
    }
};
