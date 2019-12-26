#include<iostream>
using namespace std;

int main(){

    int num,num2;
    while(cin>>num>>num2){
    int rem,rev = 0;
    while(num !=0){
        rem = num % 10;
        rev = rev *10 +rem;
        num = num / 10;
}cout<<"number one rev = "<<rev<<endl;

    int rem2,rev2=0;

    while(num2 != 0){
        rem2 = num2 %10;
        rev2 = rev2 * 10 +rem2;
        num2 = num2 /10;
    }cout<<"number two rev = "<<rev2<<endl;

    int totalrev = rev + rev2;



    int rem3,rev3=0;
    while(totalrev !=0){
            rem3 =totalrev % 10;
            rev3 = rev3 *10 +rem3;
            totalrev = totalrev/10;

    }
    cout<<rev3;

    }
    return 0;
}
