#include<iostream>
using namespace std;

int main(){
    int num=1;
    int Even=0;
    int odd=0;
    while (num!=0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num==0){
            break;
        }
        if(num%2==0){
            Even++;
        }
        else{
            odd++;
        }
    }
    cout << "#Even numbers = "<<Even<<"\n";
    cout << "#Odd numbers = "<<odd<<"\n";
    return 0;
}
