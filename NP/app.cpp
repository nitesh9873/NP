
//offstream is for---->>> write  in the file if it(file) is not presnet then make a file then 
// write the text in the  file you have just make .

//iffstream is for read the other file 

#include<iostream>
#include<fstream>
int arr[5];
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the input:";
    for (int i = 0; i < 5; i++)
        cin>>arr[i];
        
    
    
ofstream fout;// offstream is a class and fout is a object 

fout.open("zoom.txt");
for (int i = 0; i < 5; i++)
{
   fout<<arr[i]<<" ";
};


sort(arr.begin(), arr.end());
for (int i = 0; i < 5; i++)
{
   fout<<arr[i]<<" ";
};
fout.close();




   
}