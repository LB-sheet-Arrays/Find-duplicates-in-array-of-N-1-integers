
//logic:
//Sort the array forst and then traverse once to check if adjacent elements are same


#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[100],i,j,n1,flag=0,duplicate_count=0;
	
	cout<<"\nHow many elements do you want? => ";
	cin>>n1;
	
	cout<<"\t\nPlz start filling your elements one by one.";
	
	//feeding array
	for(i=0;i<n1;i++)
	{
		cout<<"\n\nElement no "<<i+1<<" ";  //thodi space dene ke liye
		cin>>a[i];
	}

	//sorting the array taaki saare duplicates ek taraf aa jaaye, TC => O(nlogn)
	sort(a,a+n1);
	
	//Finding the duplicate character. Complexity is O(n).Complexity is O(n)
	for(i=0;i<n1;i++)
	{
		duplicate_count++;
		if(a[i]!=a[i+1] || i+1>=n1) //i+1>=n isiliye taaki last element ko ek baar check kar sake
		{
			//this ensures that the element repeats. It should be present more than once
   			if(duplicate_count>1) 
   			{
   				//Agar ye sentence print nahi hota hai iska matlab hamare pass saare unique elements hai.
   				//isko flag se mark karo.
   				cout<<"\nDuplicate element => "<<a[i]; 
   				flag=1;
			} 
			//reset karo ab count ko
			duplicate_count=0;
			}
	}
	if(flag==0)
	printf("\nThere is no duplicate element in your array!");

return 0;
}


	
