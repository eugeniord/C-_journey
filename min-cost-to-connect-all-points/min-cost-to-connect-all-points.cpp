class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        
        //initialize the priority heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        //create bool vector inMst;
        vector<bool> inMst(n);

        heap.push({0, 0});
        int mstCost = 0;
        int edgesUsed = 0;

        while (edgesUsed < n){
            pair<int, int> topElement = heap.top();
            heap.pop();

            // cout<< topElement.first<< " "<< topElement.second<<endl;

            int weight = topElement.first;
            int myNode = topElement.second;

            //check if node in mst
            if (inMst[myNode])
                continue;

            inMst[myNode] = true;
            mstCost += weight;
            edgesUsed++;

            for (int i = 0; i < n; ++i){
                if (!inMst[i]){

                    int nextWeight = abs(points[myNode][0] - points[i][0]) + 
                                    abs(points[myNode][1] - points[i][1]);
                    heap.push({nextWeight, i});
                }
            }
        }
        
        return mstCost;
    }
};