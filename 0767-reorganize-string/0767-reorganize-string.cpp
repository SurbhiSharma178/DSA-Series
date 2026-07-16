class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
       char max_freq_char=0;
       int max_freq=INT_MIN;
       for(int i=0;i<26;i++){
        if(hash[i]>max_freq){
            max_freq=hash[i];
            max_freq_char=i+'a';
        }
       }
       int index=0;
    //    cout<< max_freq_char<< endl;
    //    cout<< max_freq << endl;
       while(max_freq>0 && index < s.size()){
        // cout << "index for v  at"<< max_freq<<" " << index<< endl ;
        s[index]=max_freq_char;
        max_freq--;
        index +=2;
       }
       cout<< max_freq << endl;
       if(max_freq != 0){
        return "";
       }
       hash[max_freq_char-'a']=0;
       for(int i =0;i<26;i++){
       
        cout<<"value of " << hash[i] << " at index "<< i << endl;
        while(hash[i]>0){
            // cout<< i << endl;
            index = index>=s.size() ?1 : index;
            // cout<<"index foe l and o " <<index << endl;
            s[index]=i+'a';
            cout<< s[index]<< endl;
            // cout<< "current value at s "<< s<< endl;
            index+=2;
            hash[i]--;
        }
       }
       return s;
    }
};