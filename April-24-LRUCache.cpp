class LRUCache {
public:
    unordered_map <int,int>::iterator it;
    unordered_map <int,int> cache;
    list<int> keys;
    int cacheSize = 0;
    LRUCache(int capacity) {
        cacheSize = capacity;
    }
    
    int get(int key) {
        it = cache.find(key);
        if (it != cache.end()){
            keys.remove(key);
            keys.push_front(key);
            return it -> second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        it = cache.find(key);
        if(it != cache.end() ){
            cache.erase(key);
            keys.remove(key);
        }
        if (cache.size() >= cacheSize){
            int keyToDelete = keys.back(); 
            keys.pop_back();
            cache.erase(keyToDelete);
        }
        keys.push_front(key);
        cache.insert(pair<int,int>(key,value));
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */