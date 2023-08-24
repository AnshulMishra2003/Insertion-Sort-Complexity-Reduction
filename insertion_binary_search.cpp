#include<iostream>
using namespace std;

int  binary_search(int arr[],int n,int value,int begining,int end)
{  
    int position=-1;

        int middle=begining+(end-begining)/2;
        if (end<=begining)
        { 
            if(value>arr[begining])
            {
                return begining+1;
            }
            else
            {
                return begining;
            }
        }      
        if(arr[middle]==value) 
        {
            position=middle+1;
            return position;
        }
    
        if(arr[middle]>value)  
            {    
                return binary_search(arr,n,value,begining,middle-1);
            }

        else
           {
               return binary_search( arr,n,value,middle+1,end);
           }

        if(position==-1)
        {
            cout<<"position is not found";
        }
}

void insertion_sort(int arr[],int n)
{
    int i,j,temp,pos;
     for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        pos=binary_search(arr,n,temp,0,j);
        while(j>=pos)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }     
}

int main(){
    int array[50],n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the  element of array "<<endl;
    for (int i=0;i<n;i++)
    {
       cin>>array[i];
    }
    cout<<"Array without sorting"<<endl;
     for (int i=0;i<n;i++)
    {
       cout<<array[i]<<"  ";
    }

    insertion_sort(array,n);
   
    cout<<"\n Sorted Array "<<endl;
     for (int i=0;i<n;i++)
    {
       cout<<array[i]<<"  ";
    }
    
    
return 0;
}