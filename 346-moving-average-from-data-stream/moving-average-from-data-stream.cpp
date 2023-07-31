class MovingAverage {
private:
    queue<int> q;
    int number = 0;
    int window;
    double sum;
public:
    MovingAverage(int size) {
        window = size;
    }
    
    double next(int val) {
        q.push(val);
        sum += val;
        number++;

        if (number > window){
            sum -= q.front();
            q.pop();
            number = window;
        }
        return sum/number;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */