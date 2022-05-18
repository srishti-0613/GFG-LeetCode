class Solution {
public:
    int romanToInt(string s) {
    int sum=0; 
    map<char,int>t;
    t.insert({'I',1});
    t.insert({'V',5});
    t.insert({'X',10});
    t.insert({'L',50});
    t.insert({'C',100});
    t.insert({'D',500});
    t.insert({'M',1000});   
    for(int i=0;i<s.length();i++){
            if(t[s[i]]<t[s[i+1]]){
                sum+=t[s[i+1]]-t[s[i]];
                i++;
                continue;
            }
          
            else{
                sum+=t[s[i]];
            }
        }
        return sum;
    }
};