#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool simple_subset_sum(int input[], int input_size)
{
    int abs_input [input_size];
    for (int i = 0; i < input_size; i++)
    {
        abs_input[i] = abs(input[i]);
        if (abs_input[i] == 0)
            return true;
    }
    
    set<int> set_input (abs_input, abs_input + input_size);

    if (set_input.size() < input_size)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TrueOrFalse(bool input)
{
    (input ? cout << "True\n" : cout << "False\n");
}

int main()
{
    int input1[3] = {1, 2, 3};
    TrueOrFalse(simple_subset_sum(input1, 3));
    
    int input2[6] = {-5, -3, -1, 2, 4, 6};
    TrueOrFalse(simple_subset_sum(input2, 6));
 
    int input3[0] = {};
    TrueOrFalse(simple_subset_sum(input3, 0)); 
    
    int input4[2] = {-1, 1};
    TrueOrFalse(simple_subset_sum(input4, 2));

    int input5[6] = {-97364, -71561, -69336, 19675, 71561, 97863};
    TrueOrFalse(simple_subset_sum(input5, 6)); 

    int input6[] = {-53974, -39140, -36561, -23935, -15680, 0};
    TrueOrFalse(simple_subset_sum(input6, 6));
}

