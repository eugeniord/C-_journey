class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        queue<string> queue;

        unordered_set<string> hash(deadends.begin(), deadends.end());
        unordered_set<string> visited;

        if (hash.find("0000") != hash.end())
            return -1;

        int depth = 0;
        queue.push("0000");
        visited.insert("0000");

        while (!queue.empty()){
            int size = queue.size();

            for (int i = 0; i < size; ++i)
            {
                string cur = queue.front();
                queue.pop();

                if (cur == target)
                {
                    return depth;
                }

                for (int j = 0; j < 4; ++j){
                    char temp = cur[j];

                    cur[j] = temp == '9' ? '0' : temp + 1;
                    if (hash.find(cur) == hash.end() && visited.find(cur)==visited.end())
                    {
                        queue.push(cur);
                        visited.insert(cur);
                    }

                    cur[j] = temp == '0' ? '9' : temp - 1;
                    if (hash.find(cur) == hash.end() && visited.find(cur)==visited.end())
                    {
                        queue.push(cur);
                        visited.insert(cur);
                    }
                    cur[j] = temp;

                }
            }
            depth++;
        }
        return -1;
    }
};