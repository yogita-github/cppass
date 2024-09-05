//#include<iostream>
//using namespace std;
//
//class A{
//	public:
//		int radius;
//		double ar;
//		double area()
//		{
//			return ar = 3.14*radius*radius;
////			cout<<ar;---alternate way
//			
//		}
//};
//int main()
//{
//	A obj1;
//	obj1.radius = 3;
//	cout<<obj1.area();
//}

//area of trapezium
//private
//#include<iostream>
//using namespace std;
//class trap{
//	int h=5;
//	float ar;
//	float sum=22;
//	public:
//	float area(){
//
//		return ar = 0.5*h*sum;
//	}
//};
//int main()
//{
//	trap t;
////	t.h= 7;--gives error
//	cout<<t.area();
//}

//#include<iostream>
//using namespace std;
//class circle{
////	protected:
//		public:
//		int rad;
//		
//};
//class getcir:public circle{
//	public:
//	void getc(int rad)
//	{
//	int a = 3*rad*rad;
//	cout<<a;
//	}
//	
//};
//int main()
//{
//	getcir c;
////	c.rad;----gives error since protected and cannot be accessed in main
//	c.getc(5);
//	
//
// C++ program to demonstrate implementation of Inheritance
//#include<iostream>
//using namespace std;
//class car{
//	public:
//
//		int avg;
//		void putcar(){
//			cout<<avg<<endl;
//		}
//		
//};
//class BMW : public car{
//	public:
//		int p;
//		void getcar(){
//			
//			cout<<p;
//		}	
//};
//int main(){
//	BMW b;
//	b.avg = 70;
//	b.p = 80;
//	b.getcar();
//	cout<<"Avg="<<b.avg<<endl;
//	cout<<"Price="<<b.p<<endl;
//	b.putcar();
//	cout<<sizeof(b);
//}

//#include<iostream>
//using namespace std;
//class car{
//	protected:
//
//		int avg;
//		void putcar(){
//			cout<<avg<<endl;
//		}
//		
//};
//class BMW : public car{
//	public:
//		int p;
//		void getcar(){
//			
//			cout<<p<<endl;
//		}	
//};
//int main(){
//	BMW b;
////	b.avg = 70;--error
//	b.p = 80;
//	b.getcar();
//////	cout<<"Avg="<<b.avg<<endl;--error
//	cout<<"Price="<<b.p<<endl;
////	b.putcar();--error
//	cout<<sizeof(b);
//}

//#include<iostream>
//using namespace std;
//class car{
//	public:
//
//		int avg;
//		void putcar(){
//			cout<<avg<<endl;
//		}
//		
//};
//class BMW : public car{
//	public:
//		int p;
//		void getcar(){
//			
//			cout<<p<<endl;
//		}	
//};
//int main(){
//	car b;
//	b.avg = 70;
////	b.p = 80;---Error we cannot access derived class object and functions through base class
////	b.getcar();--Error
//	cout<<"Avg="<<b.avg<<endl;
////	cout<<"Price="<<b.p<<endl;-----Error
//	b.putcar();
//	cout<<sizeof(b);
//}

////#include <iostream> 
////using namespace std; 
////class Base { 
////private: 
////    int pvt = 1; 
////
////protected: 
////    int prot = 2; 
////  
////public: 
////    int pub = 3; 
////  
////     
////    int getPVT() { return pvt; } 
////}; 
////  
////class PrivateDerived : private Base { 
////public: 
////    int getProt() { return prot; } 
////     int getPub() { return pub; }
////	 //PRIVATE:prot,pub,getPVT(); 
////}; 
////  
////int main() 
////{ 
////    PrivateDerived object1;  
////    cout << "Protected = " << object1.getProt() << endl; 
////    cout << "Public = " << object1.getPub() << endl; 
////
//// //cout << "PPRIVATE = " << object1.getPVT() << endl;   //ERROR
////}



