class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int s1 = 0;
        int s2 = 0;
        int s3 = 0;
        for(int i = 0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while (pq.size() > 1 ) {
            s1 = pq.top();
            pq.pop();
            s2 = pq.top();
            pq.pop();
            s3 = s1 - s2;
            pq.push(s3);
        }
        return pq.top();
    }
};