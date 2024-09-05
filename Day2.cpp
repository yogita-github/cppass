////Find out maximum element in array
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	cout<<"Enter 5 Values"<<endl;
//	for(int i=0;i<5;++i)
//	{
//		cin>>*(a+i);
//		
//	}
////	cout<<"Numbers are";
//	for(int j=0;j<5;++j)
//	{
//		cout<<a[j]<<" ";
//	}
////	return 0;	
//}
//
//Enter 5 Values
//2
//3
//4
//5
//6
//2 3 4 5 6

#include<iostream>
using namespace std;
int main()
{
	int a[]={3,7,9,66,92};
	int temp;
	for (int i =0; i<5;++i)
	{
		temp = a[i];
		if(a[i+1]>a[i])
		{
			temp=a[i+1];
		}
		
	}
	cout<<"max number is "<<temp;
};


