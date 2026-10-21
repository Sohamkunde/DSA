
class MyStack {
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() {
    }

    bool empty() {
        return q1.empty() && q2.empty();
    }

    void push(int x) {
        if (!q1.empty() || q2.empty()) {
            q1.push(x);
        } else {
            q2.push(x);
        }
    }

    int pop() {
        if (empty()) {
            return 0;
        }

        if (!q1.empty()) {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }

            int ele = q1.front();
            q1.pop();
            return ele;
        } else {
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }

            int ele = q2.front();
            q2.pop();
            return ele;
        }
    }

    int top() {
        if (empty()) {
            return 0;
        }

        if (!q1.empty()) {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }

            int ele = q1.front();
            q1.pop();
            q2.push(ele);

            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }

            return ele;
        } else {
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }

            int ele = q2.front();
            q2.pop();
            q1.push(ele);

            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }

            return ele;
        }
    }
};
