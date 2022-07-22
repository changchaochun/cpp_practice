# include <iostream>
# include <string>
# include <vector>

using namespace std;

void display(const vector<string> *const v)
{
//    (*v).at(0) = "Funny";
    for(auto str: *v)
        cout << str << " " << &str << endl;
    cout << endl;
//    v = nullptr
}

void display(int *array, int sentinel)
{
    while(*array !=sentinel)
        cout << *array++ << " ";
    cout << endl;   //[,] 2 line are of the same statement 
}

int main()
{
//    cout << "---------------------------" << endl;
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    display(&stooges);
    cout << "------------------------------" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    
    cout << endl;
    return 0;
}