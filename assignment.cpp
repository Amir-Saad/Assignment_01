#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

int main()
{       
        string response;
        int arr[100];
        int i, number, arraySize, cnt=0, posetion , tryAfterWhile = 0;

        cout<<"\n Enter Array Size : ";
        cin>>arraySize;

        cout<<"\n Enter Array Of Numbers : \n";
        for(i=0; i<arraySize; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }

        cout<<"\n What do you want to do [ Search , Add , Remove , Exit ] ";
        cin>>response;
        
        while(true)
        {
                if (tryAfterWhile == 1)
                {
                        cout<<"\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
                        cout<<"\n What do you want to do [ Search , Add , Remove , View_Element , Exit ] ";
                        cin>>response; 
                }
                tryAfterWhile = 1;
                  
                //by using #algorithm to transform the all user input to lowercase
                transform(response.begin(),response.end(),response.begin(),::tolower);

                if(response == "search")
                {
                cout<<"\n Enter Element to be Searched : ";
                cin>>number;
                
                for(i=0; i<arraySize; i++)
                {
                        if(arr[i]==number)
                        {
                                cnt=1;
                                posetion=i+1;
                                break;
                        }
                }
                if(cnt==0)
                {
                        cout<<"\n Element Not Found..!!\n";
                        continue;
                }
                else
                {
                        cout<<"\n Element "<<number<<" Found at Position "<<posetion;
                }
                }
                else if (response == "add")
                {
                       
                        int position,element;

                        cout<<"\n Enter Element to be inserted : ";
                        cin>>element;

                        cout<<"\n At What Position ? ";
                        cin>>position;

                        if (position>(arraySize+1))
                        {
                                cout<<"\n [-] You Can't Insert Element in Position That is Maximum than the Array Size !\n";
                                cout<<" Type anything to Exit !";
                                string w;
                                cin>>w;
                                return 0;
                        }
                        
                        for ( i = arraySize ; i >= position; i--)
                        
                                arr[i] = arr[i-1]; 
                                arr[i] = element;
                                arraySize++;
                        
                        
                        cout<<"\n The New Array is : \n\n ";
                        for ( i = 0; i < arraySize; i++)
                                cout<<arr[i]<<" ";
                        cout<<"\n";
                        
                }
                else if (response == "remove")
                {
                        int element , j , found = 0;

                        cout<<"\n Enter Element to Delete From the Array : ";
                        cin>>element;

                        for ( i = 0; i < arraySize; i++)
                        {
                                if (arr[i] == element)
                                {
                                        for ( j = i; j < (arraySize-1); j++)
                                                arr[j] = arr[j+1];
                                                found++;
                                                arraySize--;
                                }       
                        }
                        
                        if (found == 0)
                        {
                                cout<<"\n [-] Element not Found in the Array !\n";
                        }
                        else
                        {
                                cout<<"\n Element Delete Successfully \n\n ";
                                for ( i = 0; i < arraySize; i++)
                                {
                                        cout<<arr[i]<<"  ";
                                }
                                
                        }

                }
                else if (response == "view_element")
                {
                        cout<<" \n";
                        for ( i = 0; i < arraySize; i++)
                        {
                                cout<<arr[i]<<"  ";
                        }
                        cout<<"\n";

                }
                else if (response == "exit")
                {
                        
                        cout<<"\n This Code Made By Amir Hanafi at NMU University <3\n\n";
                        return 0 ;
                        
                }
                else
                {
                cout<<"\n\n\n\n [-] Invalid Choice \n\n\n\n";
                return 0;
                }

        }       
        string ww ;
        cout<<" Type anything to Exit !";
        cin>>ww;
        return 0;
}