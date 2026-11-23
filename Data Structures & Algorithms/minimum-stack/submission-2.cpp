
class MinStack {
public:
    vector<int> arr;
    int size = 0;

    MinStack() {
    }

    void push(int val) {
        arr.push_back(val);
        size++;
    }

    void pop() {
        arr.pop_back();
        size--;
    }

    int top() {
        return arr.back();
    }

    int getMin() {
        return *min_element(arr.begin(), arr.end());
    }
};
