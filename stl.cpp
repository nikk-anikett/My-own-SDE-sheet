#include<bits/stdc++.h>
#define vi vector<int>   
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void mathTrick(){
    // count the number of element present in a single number
    int count=floor(log10(num))+1; 

    //GCD
    int ans=__gcd(element1,element2);

    //LCM
    #include <boost/math/common_factor.hpp>
    boost::math::lcm(element1,element2);

    //PERMUTATION
    next_permutation(begin(arr),end(arr));
    prev_permutation(begin(arr),end(arr));

    //FLOOR AND CEIL
    floor(val);
    Input : 2.5   Input : -2.1   Input : 2.9
    Output : 2    Output : -3    Output : 2

    ceil(val);
    Input : 2.5   Input : -2.1   Input : 2.9
    Output : 3    Output : -2    Output : 3
    
}
void algorithmTrick(){
    vector<int> v;
    int min=*min_element(v.begin(),v.end());    // O(n)
    int max=*max_element(v.begin(),v.end());    // O(n)
    int sum = accumulate(v.begin(),v.end(),0);  // O(n)
    int countt=count(v.begin(),v.end(),2);      // O(n)

    // in case of vector,string
    sort(begin(v),end(v));                      //O(nlogn)
    sort(v.begin(),v.end());                    //O(nlogn)
    sort(v.rbegin(),v.rend()); //reverse        //O(nlogn) 
    reverse(v.begin(),v.end());                 //O(n)

     // for array
    sort(a,a+n);                                //O(nlogn)
    sort(rbegin(arr),rend(arr));                //O(nlogn)
}

void vectorTrick(){
    int row,col;
    vector<int> arr;
    vector<int> :: iterator it;

    // FIND FUNCTION
    it=find(begin(arr),end(arr),search); 
    if(it!=arr.end())
    // return 1;

    // 2D VECTOR
    vector<vector<int>> arr(row,vector<int> (col));



}

void setTrick(){
    set<int> s;                   
    unordered_set<int> s;
    multiset<int> s;
    unordered_multiset<int> s;
    s.clear();

    // INSERT
    s.insert(value);
    FIND FUNCTION
    if(s.find(value)!=v.end());
         return true

    //ERASE
    s.erase(value);            
    s.erase(s.begin(),s.end()); 
}
void mapTrick(){
    map<int,int> mp;                  
    unordered_map<int,int> mp;

    //INSERT
    mp.insert({key,value});
    for counting the frequency
    mp[s[i]]++;

    map<int,vector<string> mp;
    mp[key].push_back(value);
    for(auto x:mp){
        for(auto it : x.second){

        }
    }
    //erase
    mp.erase(key_value);

}
void stringTrick(){
    string str;
    //FIND FUNCTION
    string s = "Hello, World!";
    
    str = s.find('0'); //return the index of first occurance of search value 
    str = s.rfind('0'); ////return the index of last occurance of search value 
    str = s.find_first_of("aeiou"); // Find first occurrence of any character in "aeiou"
    str = s.find_last_of("aeiou"); // Find last occurrence of any character in "aeiou"

    
    if(s.find(str)!=string ::npos)
    return s.find(str); // return index

    
    string sub = s.substr(7, 5);  /// substring

    // From number to string
    int num = 42;
    std::string s = std::to_string(num);
    
    // From string to number
    std::string str = "123";
    int n = std::stoi(str);
    long l = std::stol(str);
    float f = std::stof(str);
        
    //typeCasting
    // string character to number
    int a=s[0]-'0';
    auto digit=to_string(a);
    auto num=stoll(digit);


        // int to char
        str += static_cast<char>(val);    
        ///
        //char to int

        static_cast<int>(value);    
  
    

     
    transform(begin(s),end(s),begin(s), :: toupper);
}
void linkedlistTrick(){
    //to create a new linkedlist
    ListNode *pre = new ListNode(0);
    ListNode *prev = pre;
    while(head){
        ListNode *temp = new ListNode(head->val);
        prev -> next = temp;
        prev = temp;
    }
    return pre -> next;



        ListNode* tail = nullptr;
        int res = 0;
        // Process each digit in the sum, starting from the least significant digit
        while (!s.empty() || res != 0) {
            tail = new ListNode(0, tail);
            if (!s.empty()) {
                res += s.top() * 2; // Double the digit and add the carry
                s.pop(); // Pop the used digit
            }
            tail->val = res % 10; // Store the least significant digit
            res /= 10; // Update the carry for the next iteration
        }

}
void stack_queue(){
    //TC: Linear time
    stack<int> st;
    st.push(value);
    st.pop();
    // to display
    st.top();
    
    queue<int> q;
    q.push(value);
    q.pop();
    // to display
    q.front();

    //sort the array in descending order
    priority_queue<int> pq; //maxheap O(nlogn)
    //sort the array in ascending order
    priority_queue<int,vector<int>,greater<int>> pq; //  minheapO(nlogn)
    
    pq.push();
    pq.pop();
    pq.top();

    dequeue<int> dq;
    dq.push_back(val);
    dq.push_front(val);
    dq.pop_front();
    dq.pop_back();

}

int main(){
    vectorTrick();
    mapTrick();
    setTrick();
    stringTrick();
    linkedlistTrick();
    mathTrick();
    algorithmTrick();
    stack_queue();
    return 0;
}
