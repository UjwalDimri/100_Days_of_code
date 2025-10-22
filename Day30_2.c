// 🔢
// Q60 (Arrays (1D))
// 📋
// Count positive, negative, and zero elements in an array.
// Show Sample Test Cases
// Input 1:
// 5
// -1 0 1 2 -2
// Output 1:
// Positive=2, Negative=2, Zero=1
int main(){
    
     int n , Positive=0,Negative=0,Zero=0;
    printf("Enter the number of element you want to enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter a element :");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]<0){
            Negative++;
        }
        else if(arr[j]>0){
            Positive++;
        }
        else if(arr[j]==0){
            Zero++;

        }
       
    }
    printf("Positive=%d\t Negative=%d\t Zero=%d\t",Positive,Negative,Zero);

    return 0;
}