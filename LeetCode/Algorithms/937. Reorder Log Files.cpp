class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int end = logs.size()-1;
        for (int i = logs.size()-1; i >= 0; --i) {
            istringstream sin(logs[i]);
            string tmp;
            sin>>tmp;sin>>tmp;
            if(isdigit(tmp[0]))
                swap(logs[i], logs[end--]);
        }
        int start[101];
        for (int i = 0; i <= end; ++i) {
            int j;
            for (j = 0; logs[i][j] != ' '; ++j);
                start[i] = j + 1;
        }
        for (int i = 0; i < end; ++i) {
            for (int j = i+1; j <= end; ++j) {
                if (logs[i].substr(start[i], logs[i].size()-start[i]) > logs[j].substr(start[j], logs[j].size()-start[j])) {
                    swap(logs[i], logs[j]);
                    swap(start[i], start[j]);
                }
                else if (logs[i].substr(start[i], logs[i].size()-start[i]) == logs[j].substr(start[j], logs[j].size()-start[j])) {
                    if (logs[i] > logs[j]) {
                        swap(logs[i], logs[j]);
                        swap(start[i], start[j]);
                    }
                }
            }
        }
        return logs;
    }
};
// sort, find, stable_sort