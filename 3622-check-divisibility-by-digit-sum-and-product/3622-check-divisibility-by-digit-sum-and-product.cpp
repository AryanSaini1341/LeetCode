class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        vector<int> a;
        int i = 0;
        while(n!=0){
            a.push_back(n%10);
            n = n/10;
            i++;
        }
        int sum = 0;
        int pro = 1;
    for(int i = 0; i<a.size();i++){
        sum = sum+a[i];
    }
     for(int i = 0; i<a.size();i++){
        pro = pro*a[i];
    }
    if(x%(pro+sum)==0) return true;
    return false;
    }
};