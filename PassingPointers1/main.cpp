# include <iostream>
# include <vector>
# include <string>

using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    int value {10};
    cout << "Value: " << value << endl;
    cout << "Memory: " << &value << endl;
    
    int *int_ptr {nullptr};
    
    double_data(&value);
    cout << "Value: " << value << endl;
    cout << "Memory: " << &value << endl;
    
    cout << "----------------------" << endl;
    int_ptr = &value;
    
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    cout << "Memory: " << &value << endl;
    
    cout << endl;
    return 0;
}