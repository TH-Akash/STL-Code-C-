#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isSafe(int ** array,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(array[row][y]==1){
            return false;
        }
    }
    // check left diagonal,,,
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(array [row][col]==1){
           return false;

        }
        row--;
        col--;
    }

     // check Right diagonal,,,
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(array [row][col]==1){
            return false;

        }
        row--;
        col++;
    }
    return true;

}


// Recursive Funcation and Backtraking ,,

bool nQueen(int ** array,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(array,x,col,n)){
            array[x][col]=1;

            if(nQueen(array,x+1,n)){
                return true;
            }

            array[x][col]=0; // Backtraking,,

        }
    }
    return false;


}

 int main(){
     int n;
     cin>>n;
     int** array=new  int*[n];
     for(int i=0;i<n;i++){ // 1D array memory allowket kore,,
        array[i]=new int [n];
        for(int j=0;j<n;j++){ // 2D array ke inotialize kore,,
            array[i][j]=0;

        }
     }
     if(nQueen(array,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }

     }
     return 0;

 }
