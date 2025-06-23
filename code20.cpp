 #include<iostream>
 
 using namespace std;
 
 int main() {
    char ch='A';
    for (int i = 1; i <=5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    
    return 0;
 }