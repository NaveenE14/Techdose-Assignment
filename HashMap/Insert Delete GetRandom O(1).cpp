class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(a.find(val)!=a.end()){
            return false;
        }
        v.push_back(val);
        a[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(a.find(val)==a.end()){
            return false;
        }
        int index=a[val];
        int last=v.back();
        a[last] = index;
        swap(v[index], v[v.size()-1]);
        v.pop_back();
        a.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};
