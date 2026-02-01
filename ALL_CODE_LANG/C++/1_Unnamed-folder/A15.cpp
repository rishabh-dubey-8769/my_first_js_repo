// #include <iostream>
// using namespace std;
// int main (){
//     int a,b;
//     cout <<"enter a=";
//     cin >>a;
//     char operation ;
//     cout <<"enter operation ";
//     cin >>operation;
//     cout <<"enter b=";
//     cin >>b;
//     switch (operation){
//         case '+' :cout <<"sum="<<a+b<<endl;
//                   break;
//         case '-' :cout <<"difference="<<a-b<<endl;
//                   break;
//         case '*' :cout <<"product="<<a*b<<endl;
//                   break;
//         case '/' :cout <<"Divide="<<a/b<<endl;
//                   break;
//         default  :cout <<"Sorry , unwanted operation.";                                          
//     }
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int a,b,c,d,e,k,l,m,n,x,y;
//     cout <<"enter amount =";
//     cin >>n;
//     //  while (y!=0) 
//      {a=n/100;
//     cout <<"$100="<<a<<endl;
//     k=n-100*a;
//     b=k/50;
//     cout <<"$50="<<b<<endl;
//     l=k-50*b;
//     c=l/20;
//     cout <<"$20="<<c<<endl;
//     m=l-20*c;
//     d=m/10;
//     cout <<"$10="<<d<<endl;
//     x=m-10*d;
//     e=x/1;
//     cout <<"$1="<<e<<endl;
//     y=x-1*e;}
// }......................................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,a,rup;
//     cout <<"enter n=";
//     cin >>n;
//     while (n!=0&&rup!=1){
//         cout <<"RUPEE=";
//         cin >>rup;
//         a=n/rup;
//         cout <<"no.="<<a<<endl;
//         n=n-rup*a;
//     }
// }..........................................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,a,rup;
//     cout <<"enter amount=";
//     cin >>n;
//     cout <<"RUPEE=";
//     cin >>rup;
//     switch(rup){
//         case 100: a=n/100;
//                   cout <<"100--"<<a<<endl;
//                   n=n-100*a;
//         case 50: a=n/50;
//                   cout <<"50--"<<a<<endl;
//                   n=n-50*a;
//         case 20: a=n/20;
//                   cout <<"20--"<<a<<endl;
//                   n=n-20*a;
//         case 10: a=n/10;
//                   cout <<"10--"<<a<<endl;
//                   n=n-10*a;
//         case 1: a=n/1;
//                   cout <<"1--"<<a<<endl;
//                   n=n-1*a;
//                   break;
//         default: cout <<"Default case.";
//     }
// }..........................................................................................................

// #include <iostream>
// using namespace std;

// int sum(int a,int b)
// {int c=a+b;
// return c;}

// int main (){
//     int num1,num2;
//     cout <<"enter num1=";
//     cin >>num1;
//     cout <<"enter num2=";
//     cin >>num2;
//     cout <<"sum is ="<<sum(num1,num2);
//     return 0;
// }.......................................................................................................

// #include <iostream>
// using namespace std;
// double area(double radius){
//     double c=(22/7.0)*radius*radius;
//     return c;
// }

// int main (){
//     double radius;
//     cout <<"enter radius=";
//     cin >>radius;
//     cout <<"Area of circle ="<<area(radius);
//     return 0;
// }............................................................................................................ 

// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     int c=a+b;
// }

// int main (){
//     int num1,num2;
//     cout <<"enter number1=";
//     cin >>num1;
//     cout <<"enter number2=";
//     cin >>num2;
//     cout <<"sum is ="<<sum(num1,num2);
// }..................................................................

// #include <iostream>
// #include <cmath>
// using namespace std;
// int power(){
//     int n1;
//     cout <<"enter base=";
//     cin >>n1;
//     int n2;
//     cout <<"enter index=";
//     cin >>n2;
//     int c=pow(n1,n2);
//     return c;
// }
// int main (){
//     cout <<"power value="<<power()<<endl;
//     return 0;
// }................................................................

// #include <iostream>
// using namespace std;
// int add(){
//     int a,b;
//     cout <<"enter a=";
//     cin >>a;
//     cout <<"enter b=";
//     cin >>b;
//     int c=a+b;
//     return c;
//     }
//     int main (){
//         int n;
//         cout <<"enter n=";
//         cin >>n;
//         for (int i=1;i<=n;i++)
//         cout <<"SUM IS ="<<add()<<endl;
//         return 0;
//     }..........................................................................

// #include <iostream>
// #include <string>
// using namespace std;
// string check(){
//     int a;
//     cout <<"enter number =";
//     cin >>a;
//     string c;
//     if (a%2==0){
//        c="EVEN" ;
//     }
//     else {c="ODD";}
//     return c;
// }
// int main (){
//     cout <<"Value is="<<check();   
//     return 0; 
// }................................................................