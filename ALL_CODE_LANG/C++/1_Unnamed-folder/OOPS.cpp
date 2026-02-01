// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     string name;
//     int age;
//     int roll;
//     public:
//     void set_name(string nm){
//         name=nm;
//     }
//     void set_age(int agg){
//         age=agg;
//     }
//     string get_name(){
//         return name;
//     }
// };
// int main(){
//     student a;
//     a.set_name("ram");
//     a.set_age(24);
//     cout<<a.get_name()<<endl;
// }
//........................................................
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int age;
//     int roll;
//     string name;
// };
// int main(){
//     Student *s=new Student;
//     (*s).name="ram";
//     (*s).age=24;
//     s->roll=35;
//     cout<<s->name<<endl;
//     cout<<s->age<<endl;
//     cout<<s->roll<<endl;
// }
//...................................................
// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     int age;
//     int roll;
//     string name;
//     public:
//     int pin;
//     void set_name(string nm){
//         name=nm;
//     }
//     string get_name(){
//         if(pin==9852){cout<<"pin verified"<<endl<<"your name is= ";return name;}
//         return "wrong pin";
//     }
// };
// int main(){
//     student s;
//     s.set_name("rohit");
//     cout<<endl;
//     for(int i=4;i>=1;i--){
//         cout<<i<<"->attempts left"<<endl;
//         cout<<"enter pin= ";
//         cin>>s.pin;
//         cout<<s.get_name()<<endl;
//     }
// }
//.....................................................
// #include<bits/stdc++.h>
// using namespace std;
// class customer{
//     public:
//     string name;
//     int acc_number;
//     int balance;
    //constructor overloading..........(line 79 to line-95)........................
    //i.e. same constructors(i.e.same class) with different no. of arguments............
    // customer(){
    //     name="ram";
    //     acc_number=75;
    //     balance=57;
    //     cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    // }
    // customer(string name,int acc_number,int balance){
    //     // (*this).name=name;
    //     // (*this).acc_number=acc_number;
    //     // (*this).balance=balance;
    //     //.............or................
    //     this->name=name;
    //     this->acc_number=acc_number;
    //     this->balance=balance;
    //     cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    // }
    // (line-97 to line-101) or (line-104 to line-105)
    // customer(string name,int acc){
    //     this->name=name;
    //     this->acc_number=acc;
    //     cout<<name<<" "<<acc_number<<" "<<endl;
    // }

    //inline constructor (i.e. function)............
    // inline customer(string nam,int acc):name(nam),acc_number(acc){
    //     cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    // }
// };
// int main(){
//     customer c1;
//     customer c2("ram",123,1000);
//     customer c3("mohan",56);
// }
//......................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class costumer{
//     public:
//     int age;
//     int balance;
//     string name;
// //default constructor -> not to be written:    costumer(){}
//     costumer(int age,int balance,string name){
//         cout<<"first time detail printing"<<endl;
//         this->age=age;
//         this->balance=balance;
//         this->name=name;
//         cout<<age<<" "<<balance<<" "<<name<<" "<<endl;
//     }

//     //copy constructor............

//     costumer(costumer &b){
//         cout<<"second time detail printing"<<endl;
//         // this->age=b.age;
//         // this->balance=b.balance;
//         // this->name=b.name;
//         // cout<<age<<" "<<balance<<" "<<name<<" "<<endl;
//         cout<<b.age<<" "<<b.balance<<" "<<b.name<<" "<<endl;
//     }
// };
// int main(){
//     costumer a(24,4600,"ram");
//     costumer b(a);
// }
//.........................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class customer{
//     public:
//     int age ;
//     int *balance;
//     string name;
//     customer(string name,int age,int bal){
//         this->age=age;
//         cout<<"heap memory created."<<endl;
//         balance=new int;
//         *balance=bal;
//         this->name=name;
//         cout<<age<<" "<<*balance<<" "<<name<<" "<<endl;
//     }
//     // destructor is not necessary to write in program bcoz by default ,it is there in the program.
//     //i.e. it is written by the compiler itself.
//     //destructor is used to delete the heap memory.
//     ~customer(){
//         cout<<"heap memory destructed."<<endl;
//     }
// };
// int main(){
//     customer a("ram",24,1000);
// }
//.............................................................
// #include<bits/stdc++.h>
// using namespace std;
// class customer{
//     public:
//     string name;
//     int acc;
//     int bal;
//     static int total_customer;//.........static variable used
//     customer(string name,int acc,int bal){
//         this->name=name;
//         this->acc=acc;
//         this->bal=bal;
//         total_customer++;
//         cout<<"name=  "<<name<<endl<<"acc= "<<acc<<endl<<"bal= "<<bal<<endl;
//     }
// };
// int customer::total_customer=0;//.....static variable initiation
// // ::resolution operator
// int main(){
//     customer a("rohit",123,1000);
//     customer b("ram",456,2000);
//     cout<<customer::total_customer<<endl;
// }
//......................................................
// #include<bits/stdc++.h>
// using namespace std;
// class customer{
//     public:
//     int age,balance;
//     string name;
//     static int strength;
//     customer(string name,int age,int bal){
//         this->name=name;
//         this->age=age;
//         this->balance=bal;
//         strength++;
//     }
//     static void access_strength(){  //static function can only access the static variable.......
//         cout<<strength<<endl;
//     }
// };
// int customer::strength=0;

// int main(){
//     customer a("ram",123,1000);
//     customer b("rohan",456,2000);
//     customer::access_strength();
// }
//...............................................................
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     //   file1 created
//     ofstream file1;
//     file1.open("new_file.txt");
//     file1<<"hello sudhanshu shekhar";
//     file1.close();
// }
//...............................................................
// #include<iostream>
// #include<fstream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
//     //   file1 created 
//     ofstream file1;
//     //   file1 opened
//     file1.open("new_file.txt");
//     file1<<endl<<"original array"<<endl;
//     for(int i=0;i<arr.size();i++){
//         file1<<arr[i]<<" ";
//     }
//     sort(arr.begin(),arr.end());
//     file1<<endl<<"sorted array"<<endl;
//     for(int i=0;i<arr.size();i++){
//         file1<<arr[i]<<" ";
//     }
//     //  file1 closed
//     file1.close();
// }
//...............................................................
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream file2;
//     file2.open("new_file.txt");
//     char c;
//     //reading the file character by character 

//     file2.get(c);             // or file2>>c;
//     while(!file2.eof()){     // eof() -> end of file
//         cout<<c<<"";

//         //reading the file character by character 
//         file2.get(c);   // or file2>>c;
//     }
//     file2.close();
// }
//...............................................................