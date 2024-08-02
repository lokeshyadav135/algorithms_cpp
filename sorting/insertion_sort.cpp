#include <iostream>  // Include the iostream library for input/output

int main() {
    int a[]={23,34,22,54,65,37,46,29,43,69,11};
    int i;
    int j;
    int len = sizeof(a)/sizeof(a[0]);
    int key;

    for(i=1;i<len;i++)
    {
        j = i;
        key = a[i];
        while(j>0 && a[j-1]>a[j])
        {
            a[j]=a[j-1];
            a[j-1] = key;
            j--;
        }
    

    };
    for(int k=0;k<len;k++){
        std::cout<<a[k] << " ";
    };


    



    return 0;  // Return 0 to indicate that the program ended successfully
}
