class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0;
        int w=0;
        while(i<n){
            char c = chars[i];
            int cp=0;
            while(i<n && chars[i]==c){
                cp++;
                i++;
            }
            chars[w++]=c;
            if(cp>1){
                string cnt = to_string(cp);
                for(char b:cnt){
                    chars[w++]=b;
                }
            }
        }
        return w;
    }
};