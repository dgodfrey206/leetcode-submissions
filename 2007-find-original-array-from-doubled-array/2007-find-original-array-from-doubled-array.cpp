class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
        vector<int> res;
        if (v.size() % 2 != 0)
            return res;
        multiset<int> s(v.begin(),v.end());
        for (auto it = s.begin(); it != s.end(); ) {
            auto target = s.find(*it * 2);
            if (target != it && target != s.end()) {
                res.push_back(*it);
                s.erase(target);
                it = s.erase(it);
            } else {
                it++;
            }
        }
        if (res.size() == v.size()/2)
            return res;
        return {};
    }
};