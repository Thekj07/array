#include<iostream>
using namespace std;

int main(){
int arr[4]={3,34,45,55,7,5,70,48,44};
int i,max;

max=arr[0];

for(i=1;i<9;i++){
	if(max<arr[i])
	max=arr[i];
	
}
cout<<"largest no. is :"<<max;

return 0;

}
