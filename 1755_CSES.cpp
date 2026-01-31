    //https://cses.fi/problemset/task/1755
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        string s;
        cin>>s;
        int n=s.length();
        vector<int>freq(26);
        for(char c:s){
            freq[c-'A']++;
        }
        int odd=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2)
                odd++;
        }
        if(odd>1 || (n%2==0 && odd>0)) cout<<"NO SOLUTION"<<endl;
        else{
            string left="",middle="";
            for(int i=0;i<26;i++){
                char c=i+'A';
                if(freq[i]%2) middle=c;
                left+=string(freq[i]/2,c);
            }
            string right=left;
            reverse(right.begin(),right.end());
            cout<<left<<middle<<right<<endl;
        }
    }
