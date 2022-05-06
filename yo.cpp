//1.WAP to define a class mountain with datamembers name, location and height. use constructor to initalize details of mountain.
//and display the mountain with maximum height among two mountains.
//2. WAP to define three different classes and swap values of private members of those classes.
#include<iostream>
using namespace std;
class Two;
class Three;
class One
{
    int num1;
    public:
        void getdata();
        void displaydata();
        friend void swap(One&,Two&,Three&);

}objOne;
class Two
{
    int num2;
    public:
        void getdata();
        void displaydata();
        friend void swap(One&,Two&,Three&);

}objTwo;
class Three
{
    int num3;
    public:
        void getdata();
        void displaydata();
        friend void swap(One&,Two&,Three&);

}objThree;
int main()
{
    One objOne;
    Two objTwo;
    Three objThree;
    objOne.getdata();
    objTwo.getdata();
    objThree.getdata();
    cout<<"before swapping"<<endl;
    objOne.displaydata();
    objTwo.displaydata();
    objThree.displaydata();
    swap(objOne,objTwo,objThree);
    cout<<"after swapping"<<endl;
    objOne.displaydata();
    objTwo.displaydata();
    objThree.displaydata();
    return 0;

}
void One::getdata()
{
    cout<<"enter the number"<<endl;
    cin>>num1;
}
void Two::getdata()
{
    cout<<"enter the number"<<endl;
    cin>>num2;
}
void Three::getdata()
{
    cout<<"enter the number"<<endl;
    cin>>num3;
}
void One::displaydata()
{
    cout<<"number="<<num1<<endl;
}
void Two::displaydata()
{
    cout<<"number="<<num2<<endl;
}
void Three::displaydata()
{
    cout<<"number="<<num3<<endl;
}
void swap(One& objOne,Two& objTwo, Three& objThree)
 {
     int temp;
	temp=objOne.num1;
	objOne.num1=objTwo.num2;
	objTwo.num2=objThree.num3;
    objThree.num3=temp;


 }
