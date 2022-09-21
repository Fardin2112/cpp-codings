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

Q3program to print the number which is not div by 3 from  1 to 100

using namespace std;
 
int main() {
	int date;
	for ( date=1;date<=100;date++){
		if(date%3==0){
			continue;
		}
		cout<<date<<endl;
	}
	return 0;
}
Q4  to print space * from in mid:
#include <iostream>
using namespace std;


int main() {
int raw,col;
cin>>raw>>col;
for(int i=1;i<=raw;i++){
	for(int j=1;j<=col;j++){
    if(i==1||i==raw||j==1||j==col){
    	cout<<"*";
    } 
    else {
    	cout<<" ";
    }
	}
	cout<<"\n";
}
	
	return 0;
}
output :*****
        *   *
        *   *
        *   *
        *****
	
Q5 to print reverse number:

	int n;
	cin>>n;
	int reverse =0;
	while(n>0){
		int lastdigit=n%10;
		reverse=reverse*10+lastdigit;
		n=n/10;
	}
	cout<<reverse;

output:
       12
       21	
	       
Q6  	       
	

