
#include<iostream>
#include<queue>
#include<vector>
using namespace std;



 // PRINT ALL THE NUMBER IN EVERY WINDOW SIZE K


// void display(queue<int>q){
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int  n=9;
//     int k=3;
//     queue<int>q;
//     for(int i=0;i<k-1;i++){
//         q.push(arr[i]);
//     }
//     for(int i=k-1;i<n;i++){
//         q.push(arr[i]);
//         display(q);
//         q.pop();
//     }
// }



// PRINT ALL THE FIRST NEGATIVE NUMBER  OF EVERY WINDOW SIZE K



 int  display(queue<int>q){
    while(!q.empty()){
        if(q.front()<0)
        return q.front();
        
   q.pop();
    }
    return 0;

 }
        int main(){
            int arr[]={2,-3,-4,-2,7,8,9,-10};
            int n=8;
            int k=3;
            
            queue<int>q;
            for(int i=0;i<k-1;i++){
                q.push(arr[i]);
            }
            vector<int>ans;
            for(int i=k-1;i<n;i++){
                q.push(arr[i]);
                ans.push_back(display(q));
                q.pop();
            }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

        }