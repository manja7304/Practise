#include <bits/stdc++.h>
using namespace std;
int main() {
    map<char,list<char>> graph;
    graph['a'] = {'b','c','d'};
    graph['b'] = {'a'};
    graph['c'] = {'a','d'};
    graph['d'] = {'c','a'};
    
    unordered_map<char,bool> visited;
            char popped_element;
    stack<char> tempStack;
    
    for(auto i : graph){
        
        if(visited[i.first] != true){
        //pushing the elements into the stack
        tempStack.push(i.first);
        
        //poping the top element
        popped_element = tempStack.top();
        tempStack.pop();
        //set the pushed element as  visited element
        visited[i.first] = true;
        
        //push its adjacent elements 
        for(auto j : i.second){
            tempStack.push(j);
            visited[j] = true;
        }
        cout<<popped_element<<endl;
    }
    }
        
  return 0;
}

