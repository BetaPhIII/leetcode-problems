class Solution {
    public:
        vector<int> exclusiveTime(int n, vector<string>& logs) {
            
            string ops;
            vector<int> result(n, 0);
            int beg, end, id, timestamp, latestTime = 0;
            stack<int> callStack;
            for(string log: logs) {
                beg = log.find(":");
                end = log.rfind(":");
    
                id = stoi(log.substr(0, beg));
                ops = log.substr(beg+1, end-beg-1);
                timestamp = stoi(log.substr(end+1, log.size()-end-1));
    
                if(ops == "start") {
                    if(!callStack.empty()) {
                        result[callStack.top()] += (timestamp - latestTime);
                    }
                    callStack.push(id);
                    latestTime = timestamp;
                } else if(ops == "end") {
                    result[callStack.top()] += (timestamp - latestTime+1);
                    latestTime = timestamp+1;
                    callStack.pop();
                }
            }
    
            return result;
        }
    };