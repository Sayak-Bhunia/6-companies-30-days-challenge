class DataStream {
public:
    int v,k,c = 0;
    DataStream(int value, int key) {
        v = value;
        k = key;
    }
    
    bool consec(int num) {
        if(num!=v) c = 0;
        else c++;
        return c>=k;
    }
};
