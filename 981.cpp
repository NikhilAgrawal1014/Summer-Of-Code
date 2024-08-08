#include <unordered_map>
#include <map>
#include <string>

using namespace std;

class TimeMap {
private:
    unordered_map<string, map<int, string>> data;
    
public:
    TimeMap() {
        // Constructor
    }
    
    void set(string key, string value, int timestamp) {
        data[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (data.find(key) == data.end()) {
            return ""; // Key does not exist
        }
        
        auto it = data[key].upper_bound(timestamp);
        if (it == data[key].begin()) {
            return ""; // No valid timestamp found
        }
        
        // Move the iterator to the previous element
        --it;
        return it->second;
    }
};
