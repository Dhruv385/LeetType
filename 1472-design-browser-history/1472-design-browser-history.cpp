class BrowserHistory {
public:
    int cnt=0,curr=0;
    string v[110];
    BrowserHistory(string homepage) {
        v[cnt]=homepage;
    }
    
    void visit(string url) {
        v[++cnt]=url;
        curr=cnt;
    }
    string back(int steps) {
        cnt=max(cnt-steps,0);
        return v[cnt];
    }
    
    string forward(int steps) {
        cnt=min(curr,cnt+steps);
        return v[cnt];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */