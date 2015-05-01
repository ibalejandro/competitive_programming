#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s;
    cin >> s;
    vector<int> trees;
    int days = 0;
    int maxDays = 0;
    for(int i = 0; i < s; ++i){
        int ti;
        cin >> ti;
        trees.push_back(ti);
    }
    sort(trees.rbegin(), trees.rend()); //Ordena de mayor a menor.
    for(int j = 0; j < s; ++j){
        days = trees[j]+(j+1);
        maxDays = ((days > maxDays) ? days : maxDays);
    }
    cout << (maxDays+1) << endl;
    
    return 0;
/*
    int s;
    cin >> s;
    vector<int> trees;
    int treesChanging[s];
    bool areTreesReady = false;
    int it = -1;
    for(int i = 0; i < s; ++i){
        int ti;
        cin >> ti;
        trees.push_back(ti);
        treesChanging[i] = 0;
    }
    sort(trees.rbegin(), trees.rend()); //Ordena de mayor a menor.
    while(!areTreesReady){
        it++;
        if(it > 0) areTreesReady = true;
        for(int j = 0; j < min(it, s); ++j){
            treesChanging[j]++;
            if(treesChanging[j] < trees[j]){
                areTreesReady = false;
            }
        }
    }
    
    cout << (it+2);
    
    return 0;
*/
}
