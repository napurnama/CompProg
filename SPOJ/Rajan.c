#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int count = 0;
    for(int i = 0; i < n-1; i++){
        int j = i + 1;
        int max_neighbor = arr[j];
        count++;
        while(max_neighbor < arr[i] && j < n){
            if(arr[j] > max_neighbor){
                max_neighbor = arr[j];
                count++;
            }
            j++;
        }
    }
    printf("%d\n", count);
}