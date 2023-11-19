task1:
	#include<iostream>
using namespace std;
main()
{	
int size;
int arr[100];
cout<<"Enter the number of saturday: ";
cin>>size;
for(int idx=0;idx<size;idx++)
{

cout<<"Enter miles run of saturday "<<idx+1<<": "<<endl;
	cin>>arr[idx];
}

cout<<"Total progress days: ";
{
int count=0;
	for(int idx=1;idx<size;idx++)
	{ 
	if(arr[idx]>arr[idx-1])
	{
		count++;
	}
  	
	}
	cout<<count;
}
}
task2:
	#include<iostream>
using namespace std;
main()
{
int size;
string word[100];
cout<<"Enter how many words you want to enter: ";
cin>>size;
for(int idx=0;idx<size;idx++)
{
 cout<<"Enter word "<<idx+1<<":";
 cin>>word[idx];
}

char letter;
cout<<"Enter the letter you want to count: ";
cin>>letter;
int count=0;
for(int idx=0;idx<size;idx++)
{
string arr=word[idx];
	for(int c=0;arr[c]!='\0';c++)
	{
		if(arr[c]==letter)
		{
			count++;
		}
	}
}
cout<<count;
}
task3:
	#include<iostream>
using namespace std;
bool repeating_cycle(int size,int k,int arr[])
{
	for(int idx=0;idx<size;idx++)
	{
		if(arr[idx]==arr[k])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
main()
{
	int size;
	int arr[100];
	cout<<"Enter the length of the array: ";
	cin>>size;
	cout<<"Enter the elements of the array: ";
	for(int idx=0;idx<size;idx++)
	{	
	cin>>arr[idx];
	
	}
	int k;
	
cout<<"Enter the length of the cycle: ";
cin>>k;
if(k>size)
{
int output=0;
cout<<"output: "<<output;
}
bool result=repeating_cycle(size,k,arr);
cout<<"output: "<<result;
}
task4:
	#include<iostream>
using namespace std;
main()
{int size;
int arr[100];
	cout<<"Enter the number of boxes: ";
	cin>>size;
	cout<<"Enter the dimentions of the boxes(length,width,height): "<<endl;
	for(int i=0;i<size*3;i++)
	{
	cin>>arr[i];
	
}

int total=0;
for(int i=0;i<size*3;i+=3)
{
	int length = arr[i];
        int width = arr[i + 1];
        int height = arr[i + 2];
        int volume = length * width * height;
        total += volume;
	
}
cout<<total;
}
task5:
	#include<iostream>
using namespace std;
main()
{
    int arr[100];
    int a;
    int size=10;
    cout<<"Enter the weight of the 10 packages: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Sorted array in ascending order: [";
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }   
        }

        if (i < size-1)
        {
            cout << ",";
        }
        if (i == size-1)
        {
            cout << "]";
        }
    
        cout<<arr[i];
    }
}
task6:
	#include<iostream>
using namespace std;
main()
{
	string word;
	string reversed;
	int idx=0;
	cout<<"Enter a string: ";
	getline(cin,word);
	for(int idx=0;idx<word.length();idx++)
	{
		reversed=reversed+word[idx];
		
       if(word[idx]==' ' || word[idx]=='\0')	
{
	 result=reversed+result;
	reversed="";
}
	}
	cout<<"Reversed string: ";
cout << reversed<<" " ;	
cout<<result<<endl;

}
	
	

task7:
	#include<iostream>
using namespace std;
main()
{
    int arr[100];
    int a;
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    cout<<"Enter the element of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

   
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            
            }   
        }

        if (i < size-1)
        {
            cout << ",";
        }
        if (i == size-1)
        {
            cout << "]";
        }
    
        cout<<arr[i];
    }
  for (int i = 1; i < size; i++) {
        if (arr[i] - arr[i-1] != 1) {
            cout<<"false";
        }
    }
    else
   {
	cout<<"can be arranged";
}
}

task8:
	#include<iostream>
using namespace std;
main()
{
	string arr[100];
	int size;
	cout<<"Enter the length of the array: ";
	cin>>size;
	cout<<"Enter the elements of the array (left or right): ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int count=0;
int	count1=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]=="right")
		{
		count++;
	}
		if(arr[i]=="left")
		{
			count1++;
		}
	}
	int i=count*90;
	int y=count1*90;
	int result=i-y;
	
	int output;
	if(result==360)
{  output=1;
cout<<"Number of full rotations: "<<output;
}
else if(result==0)
{
	output=0;
	cout<<"Number of full rotations: "<<output;
}
else if(result==2*360)
{
	output=2;

	cout<<"Number of full rotations: "<<output;
}
}
task9:
