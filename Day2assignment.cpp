//Q1Find out maximum element in array without pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[]={3,7,9,66,92};
//	int temp;
//	for (int i =0; i<5;++i)
//	{
//		temp = a[i];
//		if(a[i+1]>a[i])
//		{
//			temp=a[i+1];
//		}
//		
//	}
//	cout<<"max number is "<<temp;
//};

//Q2Find out maximum element in array with pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[]={3,7,9,66,92};
//	int temp;
//	for (int i =0; i<5;++i)
//	{
//		temp = *(a+i);
//		if(*(a+i+1)>*(a+i))
//		{
//			temp=*(a+i+1);
//		}
//		
//	}
//	cout<<"max number is "<<temp;
//};
//max number is 92

//Q3Calculate avg of all element in array using pointer 
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	int sum=0;
//	float avg;
//	for(int i=0;i<5;++i){
//		cin>>*(a+i);
//		sum = sum + *(a+i);
//	}
//	for(int j=0;j<5;++j){
//		cout<<*(a+j);
//	}
//	avg=(float)sum/5;
//	cout<<"Sum are "<<sum;
//	cout<<"Average"<<avg;
//}

//Q4Copy elements of one array to another using pointer
//#include <iostream>  
//using namespace std;  
//int main()  
//{ 
//    int p1[5];
//    int *p2[5]; 
//    cout << "Enter five nos :" <<endl;  
//    for(int i=0;i<5;i++)  
//    {  
//        cin >> p1[i];  
//    }  
//    for(int i=0;i<5;i++)  
//    {  
//        p2[i]=&p1[i];   
//    }    
//  cout << "The values are" << endl; 
//    for(int i=0;i<5;i++)  
//    {  
//        cout << *p2[i] << endl;  
//    }
//};


//Q1)Addition of 2 matrices?
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3];
//	for(int i=0;i<=2;i++)
//	{
//		for(int j =0;j<=2;j++)
//		{
//			cin>>arr[i][j];
//		}
//		cout<<"\n";
//	}
//	for(int i=0;i<=2;i++)
//	{
//		for(int j =0;j<=2;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<"\n";
//	}
//	int arr2[3][3];
//	for(int i=0;i<=2;i++)
//	{
//		for(int j =0;j<=2;j++)
//		{
//			cin>>arr2[i][j];
//		}
//		cout<<"\n";
//	}
//	for(int i=0;i<=2;i++)
//	{
//		for(int j =0;j<=2;j++)
//		{
//			cout<<arr2[i][j];
//		}
//		cout<<"\n";
//	}
//	for(int i=0;i<=2;i++)
//	{
//		for (int j =0;j<=2;j++)
//		{
//			int sum = 0;
//			sum = arr[i][j]+arr2[i][j];
//			cout<<sum<<" ";
//		}
//		cout<<"\n";
//	}
//	
//}
//1
//1
//1
//
//2
//2
//2
//
//3
//3
//3
//
//111
//222
//333
//3
//3
//3
//
//2
//2
//2
//
//1
//1
//1
//
//333
//222
//111
//4 4 4
//4 4 4
//4 4 4

//Q2)transpose of a matrix(row->col,col->row)
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3];
//	for(int i=0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	for(int i=0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<"\n";
//	}
//	for(int i = 0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			
//			cout<<arr[j][i];
//		}
//		cout<<"\n";
//	}
//}
//2
//3
//2
//1
//1
//1
//2
//3
//4
//232
//111
//234
//212
//313
//214

//Q3)Square of all elements of 2d array?
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3][3];
//	int square;
//	
//	for(int i = 0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	for(int i = 0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<"\n";
//	}
//	for(int i=0;i<=2;i++)
//	{
//		for(int j = 0;j<=2;j++)
//		{
//			
//			square = arr[i][j] * arr[i][j];
//			cout<<square<<" ";
//		}
//		cout<<"\n";
//	}
//}
//2
//2
//2
//3
//3
//3
//4
//4
//4
//222
//333
//444
//4 4 4
//9 9 9
//16 16 16

//Q4.Store details of 10 books in an array?
//#include<iostream>
//using namespace std;
//class Book
//{
//	int id;
//    string name;
//  	int price;
//  	string author;
// 	public:
//    	void getdata();
//    	void putdata();
//};
//void Book::getdata()
//{
//  	cout << "Enter Id : ";
//  	cin >> id;
//  	cout << "Enter name : ";
//  	cin >> name;
//  	cout << "Enter price: ";
//  	cin >> price;
//  	cout << "Enter author: ";
//  	cin >> author;
//}
//void Book::putdata()
//{
//  cout << id << " ";
//  cout << name << " ";
//  cout << price << " ";
//  cout << author << " ";
//  cout << endl;
//}
//int main()
//{
// 
//  Book bks[10];
//  int i;
//  for(i = 0; i < 10; i++)
//    bks[i].getdata();
//   
//  cout << "\n Books Details - " << endl;
//  for(i = 0; i < 10; i++)
//    bks[i].putdata();
//}

