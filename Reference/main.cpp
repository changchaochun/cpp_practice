# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main()
{
    int num{100};
    int &ref {num};
    
    cout << num << endl;
    cout << &num << endl;
    cout << ref << endl;
    cout << &ref << endl; 
    
    num = 200;
    cout << "--------------------------" << endl;
    cout << num << endl;
    cout << &num << endl;
    cout << ref << endl;
    cout << &ref << endl;
    
}