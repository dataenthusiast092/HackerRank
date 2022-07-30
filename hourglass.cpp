#include <climits>
#include <iostream>
#include <ctime> 
using namespace std;



int main() {
    // C++ program timer: https://linuxhint.com/timer-function-cpp/
    clock_t begin = clock();
    double ttl_time = 0.0;
    int i, j, k;
    int arr[6][6], temp=INT_MIN, a;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a=(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
            if(a>temp)
                temp=a;
        }
        
        
    }
    
    
    
    clock_t end = clock();
    ttl_time = double(end - begin) / CLOCKS_PER_SEC;
    cout<<"Sum = "<<temp<<"Total time:"<<ttl_time;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}