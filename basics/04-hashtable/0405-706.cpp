/*
 * leetcode 706
 *
 */

class MyHashMap {
private:
    vector<pair<int, int>> mp;

public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for (auto& pair : mp) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }    
        mp.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        for (const auto& pair : mp) {
            if (pair.first == key) {
                return pair.second;
            }
        }    
        return -1;
    }
    
    void remove(int key) {
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->first == key) {
                mp.erase(it);
                return;
            }
        }    
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

