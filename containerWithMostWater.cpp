//LEETCODE 11:Container with most water
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int i=0,j=height.size()-1,minh,h=0,maxArea=0;
    while(i<j){
        minh=min(height[i],height[j]);//As minimum height will determine the amount of water contained
        h=j-i;
        maxArea=max(maxArea,h*minh);
        if(height[i]>=height[j]){
            j--;//Since min height will determine volume,so only shifting them as shifting max height will result in reduction of volume only 
        }else{
            i++;
        }
    }
        cout<<"Max volume of container is: "<<maxArea<<endl;
    return 0;
}        
        