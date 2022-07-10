#include<iostream>
using namespace std;
int main(){

	int i,j,r,c;
    int a[i][j], b[i][j], d[i][j];
    cout<<"enter the no. of rows and columns . :";
    cin>>r>>c;
 
 cout<<"matrix of a. :";
   for(i=0;1<r;i++){
   	for(j=0;j<c;j++){
   		cin>>a[i][j];
	   }
   }   
   
   cout<<"matrix of b. :";
     for(i=0;i<r;i++){
     	for(j=0;j<c;j++){
     		cin>>b[i][j];
		 }
	 }
   
   cout<<"sum of a and b. :";
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		d[i][j]=a[i][j]+b[i][j];
    		cout<<d[i][j];
		}
		cout<<endl;
		
	}
   
   return 0;
}
