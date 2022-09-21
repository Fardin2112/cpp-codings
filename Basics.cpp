Q1   contniue and break statement:


include <iostream>
using namespace std;

int main() {

    int pocket_money=3000;
	for(int date=1;date<=31;date++){
        if(date%2==0){
            if(pocket_money==0){
                break;
            }
            continue;
        }
        cout<<"Date"<<date<<"      ";
        cout<<"lets go out\n";
        pocket_money-300;
    }
	return 0;
}



Q2

programe to print pattern
#include <iostream>
using namespace std;


int main() {
int raw,col;
cin>>raw>>col;
for(int i=1;i<=raw;i++){
	for(int j=1;j<=col;j++){
		cout<<"*";
	}
	cout<<"\n";
}
	return 0;
}
