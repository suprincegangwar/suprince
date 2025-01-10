#include <stdio.h>
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    // int ans[9];
    // int idx = 0;
    // for (int i = 0; i < 9; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         ans[idx] = arr[i];
    //         idx++;
    //     }
    // }
    // while(idx != 9)
    // {
    //     ans[idx] = 0;
    //     idx++;
    // }
    // space complexisity
    for(int i =0 ;i<9-1;i++){
        for(int j=0; j<9-1-i;j++){
            if (arr[j]== 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } }
    for (int i = 0; i < 9; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}