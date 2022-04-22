#include <iostream>

#include<bits/stdc++.h>
using namespace std;

void solve (int opening_hh, int opening_mm, int duration_hh, int duration_mm) {
    // Your code goes here
     int start_mins = opening_hh*60 + opening_mm;
    int duration_mins = duration_hh * 60 + duration_mins;
    int total_mins = start_mins + duration_mins;
    int total_hrs = total_mins/60;
    int rem_mins = total_mins % 60;
    int closing_hh = total_hrs % 24;
    int closing_mm = rem_mins;
    cout << closing_hh << " " << closing_mm << endl;
  
    // Print the output here
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
        cout << "\n";
    }
}
