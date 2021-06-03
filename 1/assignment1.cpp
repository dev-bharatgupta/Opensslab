#include<bits/stdc++.h>
using namespace std;

int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif

  fstream newfile;
  
   newfile.open("sample.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){  //read data from file object and put it into string.
         cout << tp << "\n";   //print the data of the string
      }
      newfile.close();   //close the file object.
   }
	    
	    return 0;
}