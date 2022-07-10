#include<iostream>
using namespace std;
int main(){
	
  int a[5],x,i,n;
     cout<<"no. of elements :";
     cin>>n;

     cout<<"array elements :";
       for(i=0;i<n;++i)
        cin>>a[i];

     cout<<"elent to search :";
        cin>>x;

    for(i=0;i<n;i++)
       if(a[i]=x)
        break;

     if(i<n){
       cout<<"index at :";

    }else{
     	cout<<"not found";

}
  return 0;
}
   
   
