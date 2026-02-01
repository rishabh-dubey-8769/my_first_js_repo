// #include <iostream>
// #include <array>
// using namespace std;
// int main (){
//     array<int ,5>a={4,6,3,2};
//     cout <<"size="<<a.size()<<endl;
//     cout <<"empty/not= "<<a.empty()<<endl;
//     cout <<"value= "<<a.at(4)<<endl;
//     cout <<"first= "<<a.front()<<endl;
//     cout <<"last= "<<a.back()<<endl;
// }
// ..............................................................................
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int >v;
//     v.push_back(4);
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     v.push_back(9);
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     v.push_back(8);
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     v.push_back(3);
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     v.push_back(5);
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     cout <<"before popping "<<endl;
//     for (int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;

//     v.pop_back();
//     cout <<"after popping "<<endl;
//     for (int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     cout <<"before clearing"<<endl;
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
//     v.clear();
//     cout <<"after clearing"<<endl;
//     cout <<"capacity= "<<v.capacity()<<endl<<"size= "<<v.size()<<endl;
// }
// ...............................................................................
// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector<int>a(6,4);
//     vector<int>_copy(a);
//     int n=_copy.size();
//     for (int i=0;i<n;i++){
//         cout <<_copy[i]<<" ";
//     }
// }
// ......................................................................
// #include <iostream>
// #include <deque>
// using namespace std;
// int main (){
//     deque<int >d;
//     d.push_back(3);
//     d.push_back(5);
//     d.push_back(8);
//     d.push_front(4);
//     d.push_front(9);

// cout <<"before pop_back= ";
// for(int i:d){
//     cout <<i<<" ";
// }
// cout <<endl;
// cout <<"2nd= "<<d.at(2)<<endl;
// cout <<"front= "<<d.front()<<endl;
// cout <<"last= "<<d.back()<<endl;
//     cout<<"after pop_back= ";
//     d.pop_back();
//     for(int i:d){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     cout <<"after pop_front= ";
//     d.pop_front();
//     for(int i:d){
//         cout <<i<<" ";
//     }
// cout<<endl;
// cout <<"size before erase= "<<d.size()<<endl;
// d.erase(d.begin()+2,d.begin()+3);
// cout <<"size after erase= "<<d.size()<<endl;
//     for(int i:d){
//     cout <<i<<" ";
// }
// cout<<endl;
// }
// ........................................................................
// #include <iostream>
// #include <list>
// using namespace std;
// int main (){
//     list<int>l;
//     l.push_back(4);
//     l.push_back(3);
//     l.push_back(5);
//     l.push_back(2);
//     l.push_front(8);
// //l.erase(l.begin()+2,l.begin()+4);
//     for(auto i:l){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     cout <<l.size()<<endl;
// // cout <<"capacity"<<l.capacity()<<endl;
// cout <<"size="<<l.size()<<endl;
// cout <<"empty/not="<<l.empty()<<endl;
// //cout <<"value="<<l.at(3)<<endl;
// cout <<"front="<<l.front()<<endl;
// cout <<"back="<<l.back()<<endl;
// }
// ..................................................................................
// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector<int>l;
//     l.push_back(4);
//     l.push_back(3);
//     l.push_back(5);
//     l.push_back(2);
// l.erase(l.begin()+1,l.begin()+2);
// for(int i:l){
//     cout <<i<<" ";
// }
// cout <<endl;
// cout <<l.size()<<endl;
// cout <<l.capacity()<<endl;
//     l.erase(l.begin());
//     for(int i:l){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     l.erase(l.begin());
//     for(int i:l){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
//.................................................................................
// #include <iostream>
// #include <stack>
// using namespace std;
// int main (){
//     stack<string>s;
//     s.push("RAM");
//     s.push("EATS");
//     s.push("APPLE");
// cout <<s.top()<<endl;
// cout <<s.size()<<endl;
// cout <<s.empty()<<endl;
//     s.pop();
//     cout <<s.top()<<endl;
// }
// ....................................................................................
// #include <iostream>
// #include <queue>
// using namespace std;
// int main (){
//     queue<string>q;
//     q.push("RAM");
//     q.push("EATS");
//     q.push("MANGO");
//     cout <<q.front()<<endl;
//     q.pop();
//     cout <<q.front()<<endl;
//     cout <<q.back()<<endl;
// }
// .....................................................................................
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(2);
//     v.push_back(7);
//     v.push_back(3);

//     cout << "for descending order= " << endl;

//     priority_queue<int> max_p(v.begin(), v.end());
//     int n = max_p.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << max_p.top() << " ";
//         max_p.pop();
//     }
//     cout << endl;

//     cout << "for ascending order= " << endl;

//     priority_queue<int, vector<int>, greater<int>> min_p(v.begin(), v.end());
//     n = min_p.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << min_p.top() << " ";
//         min_p.pop();
//     }
//     cout << endl;
// }
//....................................................................................
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(5);
//     s.insert(1);
//     s.insert(5);
//     s.insert(5);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);
//     s.insert(7);
//     s.insert(0);

//     /* find out values from this to this:-*/

//     for(auto i=s.find(5);i!=s.end();i++){
//         cout <<(*i)<<endl;
//     }

//     /* find out values from this to this:-*/

//     for(auto i=s.find(5);i!=s.begin();i--){
//         cout <<(*i)<<endl;
//     }
// for (auto i : s)
// {
//     cout << i << " ";
// }
// cout << endl;

// cout <<"check (5) present/not= "<<s.count(5)<<endl;

// set<int>::iterator itr = s.begin();
// itr++;
// s.erase(itr);
// for (auto i : s)
// {
//     cout << i << endl;
// }
// cout << endl;
// }
//........................................................................................
//  #include <iostream>
//  #include <map>
//  using namespace std;
//  int main(){
//     map<int,string>m;
//     m.insert({4,"mango"});
//     m.insert({1,"ram"});
//     m[2]={"eats"};
//     m[3]={"RAW"};
//     cout <<"before erasing ->"<<endl;
//     for (auto i:m){
// cout<<i.first<<" = "<<i.second<<endl;
// }
// cout <<endl;
// cout <<"after erasing -> "<<endl;
// m.erase(m.begin());/*step-1:try this first*/
// m.erase(2);/*step-2:then try this*/
// for (auto i:m){
//     cout<<i.first<<" = "<<i.second<<endl;
// }
// cout <<endl;
//  }
//............................................................................
// #include <iostream>
// #include <map>
// using namespace std;
// int main (){
//     map<int,char>m;

//     /*step-1:try this first*/
//     m.insert({7,25});
//     m.insert({2,34});
//     m.insert({9,58});
//     m.insert({5,88});

//     /*step-2:then try this*/
//     int n;
//     cout<<"enter n= ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         m.insert({i,i});
//     }

//     cout <<"mapping -> "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" = "<<i.second<<endl;
//     }
//     cout <<endl;
// }
//................................................................................
// #include <iostream>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> s;
//     s.insert(2);
//     s.insert(7);
//     s.insert(1);
//     s.insert(2);
//     s.insert(5);
//     s.insert(3);
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout <<endl;
    // for(auto i=s.find(2);i!=s.end();i++){
    //     cout <<(*i<<" ";
    // }
    // cout <<endl;

    // for(auto i=s.begin();i!=s.end();i++){
    //     cout <<*i<<" ";
    // }
    // cout <<endl;
    //     cout <<"count_check(1/0) T/F -> "<<s.count(1);
    //     cout <<endl;
// }
//................................................................................
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main (){
//     unordered_map<int,int>m;
//     m.insert({7,25});
//     m.insert({5,88});
//     m.insert({2,34});
//     m.insert({9,58});
//     cout <<"unordered_mapping -> "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" = "<<i.second<<endl;
//     }
//     cout <<endl;
// cout<<(*m.find(5)).first<<" = "<<(*m.find(9)).second;
//     // auto  itr=m.find(5);
//     for(auto i=m.find(5);i!=m.end();i++){
//         cout <<(*i).first<<" = "<<(*i).second<<endl;
//     }
//     cout <<endl;
// }
//................................................................................
// #include <iostream>
// #include <vector>
// #include <algorithm>
// /* binary_search & upper&  lower-bound */
// using namespace std;
//  int main()
//  {
//      vector<int> v;
//      v.push_back(2);
//      v.push_back(5);
//      v.push_back(7);
//      v.push_back(9);
//  for (int i : v)
//  {
//      cout << i << " ";
//  }
//  cout << endl;
//  cout << "search_for(9) T/F -> " << binary_search(v.begin(), v.end(), 9) << endl;
//  cout << endl;
//      //RANGE=(Upper limit-lower limit) or (upper bound- lower bound)
//      // range={2,5,7,9}
    //  cout << "L-Iteration_for(1) -> " <<lower_bound(v.begin(), v.end(),1 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),1 ) << endl;
    //  cout << "U-Iteration_for(1) -> " <<upper_bound(v.begin(), v.end(),1 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),1 ) << endl;
    //  cout << "L-Iteration_for(2) -> " <<lower_bound(v.begin(), v.end(),2 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),2 ) << endl;
    //  cout << "U-Iteration_for(2) -> " <<upper_bound(v.begin(), v.end(),2 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),2 ) << endl;
    //  cout << "L-Iteration_for(3) -> " <<lower_bound(v.begin(), v.end(),3 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),3 ) << endl;
    //  cout << "U-Iteration_for(3) -> " <<upper_bound(v.begin(), v.end(),3 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),3 ) << endl;
    //  cout << "L-Iteration_for(4) -> " <<lower_bound(v.begin(), v.end(),4 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),4 ) << endl;
    //  cout << "U-Iteration_for(4) -> " <<upper_bound(v.begin(), v.end(),4 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),4 ) << endl;
    //  cout << "L-Iteration_for(5) -> " <<lower_bound(v.begin(), v.end(),5 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),5 ) << endl;
    //  cout << "U-Iteration_for(5) -> " <<upper_bound(v.begin(), v.end(),5 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),5 ) << endl;
    //  cout << "L-Iteration_for(6) -> " <<lower_bound(v.begin(), v.end(),6 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),6 ) << endl;
    //  cout << "U-Iteration_for(6) -> " <<upper_bound(v.begin(), v.end(),6 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),6 ) << endl;
//      cout << "L-Iteration_for(7) -> " <<lower_bound(v.begin(), v.end(),7 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),7 ) << endl;
//      cout << "U-Iteration_for(7) -> " <<upper_bound(v.begin(), v.end(),7 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),7 ) << endl;
//      cout << "L-Iteration_for(8) -> " <<lower_bound(v.begin(), v.end(),8 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),8 ) << endl;
//      cout << "U-Iteration_for(8) -> " <<upper_bound(v.begin(), v.end(),8 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),8 ) << endl;
//      cout << "L-Iteration_for(9) -> " <<lower_bound(v.begin(), v.end(),9 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),9 ) << endl;
//      cout << "U-Iteration_for(9) -> " <<upper_bound(v.begin(), v.end(),9 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),9 ) << endl;
//      cout << "L-Iteration_for(10) -> " <<lower_bound(v.begin(), v.end(),10 )-v.begin()<<" : "<<*lower_bound(v.begin(), v.end(),10 ) << endl;
//      cout << "U-Iteration_for(10) -> " <<upper_bound(v.begin(), v.end(),10 )-v.begin()<<" : "<<*upper_bound(v.begin(), v.end(),10 ) << endl;
// }

//................................................................................................................

// #include <iostream>
// #include <algorithm>              /* sorting & swapping + minimum & maximum */
// #include <vector>
// using namespace std;
// int main (){
//     vector<int>v={4,3,5};
//     int n=v.size();
//     cout<<"before sorting= "<<endl;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     sort(v.begin(),v.end());
//     cout<<"after sorting= "<<endl;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
//     int a=4;             
//     int b=3;
//     cout <<"min = "<<min(a,b)<<endl;
//     cout <<"max = "<<max(a,b)<<endl;
//     swap(a,b);
//     cout <<"swapped = "<<a<<" "<<b<<endl;
// }
//.....................................................................................
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main (){
//     vector<int>v={4,3,9,2,5};
//     int n=v.size();
    // cout <<"after reversing= "<<endl;
    // reverse(v.begin(),v.end());
    // for(int i:v){
    //     cout <<i<<" ";
    // }
    // cout <<endl;
    // cout <<"after rotating/shifting the reversed value  leftward by 1 = "<<endl;
    // rotate(v.begin(),v.begin()+1,v.end());
    // for(int i:v){
    //     cout <<i<<" ";
    // }
    // cout <<endl;
    // cout <<"after rotating/shifting the new_reversed value  leftward by 2 = "<<endl;
    // rotate(v.begin(),v.begin()+2,v.end());
    // for(int i:v){
    //     cout <<i<<" ";
    // }
    // cout <<endl;
//     cout <<"after rotating/shifting the new_reversed value  leftward by n = "<<endl;
//     rotate(v.begin(),v.begin()+n,v.end());
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }