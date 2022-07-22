# include <iostream>
# include <string>
# include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main()
{
    int x {100}, y {200};
    cout << "x: " << x << endl;
    cout << &x << endl;
    cout << "y: " << y << endl;
    cout << &y << endl;
    swap(&x, &y);
    
    cout << endl;
    cout << "x: " << x << endl;
    cout << &x << endl;
    cout << "y: " << y << endl;
    cout << &y << endl;
    cout << endl;
    return 0;
}