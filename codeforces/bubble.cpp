#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="one million two hundred thirty four thousand five hundred sixty seven";
    vector<string> arr;
    map<string,int> mp1{{"one",1},{"two",1},{"three",3},{"four",4},{"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9},{"ten",10},{"eleven",11},{"twelve",12},{"thirteen",13},{"fourteen",14},
    {"fifteen",15},{"sixteen",16},{"seventeen",17},{"eighteen",18},{"nineteen",19}};
    map<string,int> mp2{{"twenty",20},{"thirty",30},{"fourty",40},{"fifty",50},{"sixty",60},{"seventy",70},{"eighty",80},{"ninty",90}};
    map<string,int> mp3{{"million",1000000},{"thousand",1000},{"hundred",100}};
    int sum=0;
    string temp="";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' ')
            temp+=s[i];
        else{
            arr.push_back(temp);
            temp="";
        }    
    }
    if(temp.length() > 0)
        arr.push_back(temp);
    int i=0;
    while(i<arr.size()){
        if(mp2.find(arr[i]) != mp2.end() and mp1.find(arr[i+1]) != mp1.end() and mp3.find(arr[i+2]) != mp3.end()){
            int temp=mp2[arr[i]]+mp1[arr[i+1]];
            temp*=mp3[arr[i+2]];
            sum+=temp;
            i+=3;
        }
        else if(mp2.find(arr[i]) != mp2.end() and mp1.find(arr[i+1]) != mp1.end()){
            int temp=mp2[arr[i+1]]+mp1[arr[i]];
            sum+=temp;
            i+=2;
        }
        else if(mp1.find(arr[i]) != mp1.end() and mp3.find(arr[i+1]) != mp3.end()){
            int temp=mp1[arr[i]]*mp3[arr[i+1]];
            sum+=temp;
            i+=2;
        }else if(mp2.find(arr[i]) != mp2.end()){
            sum+=mp2[arr[i]];
            i++;
        }else if(mp1.find(arr[i]) != mp1.end()){
            sum+=mp1[arr[i]];
            i++;
        }
    }
    cout<<sum<<endl;
    // for(auto x:arr)
    //     cout<<x<<" ";
    return 0;
}