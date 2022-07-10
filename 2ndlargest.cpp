#include<iostream>
using namespace std;
int main(){
	
int arr[10]={23,32,45,43,4,6,7,8,97};
int i,max2;

for(i=1;i<10;i--){
	if(max2>arr[i])
	max2=arr[i];
}

cout<<"2nd largest . :"<<max2;

return 0;

}
