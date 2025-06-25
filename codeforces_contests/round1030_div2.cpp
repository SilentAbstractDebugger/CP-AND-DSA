// <div>
// ans a

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         // First k characters = '1', remaining = '0'
//         string s(k, '1');
//         s += string(n - k, '0');

//         cout << s << endl;
//     }

//     return 0;
// }
// </div>


// <div>
// ans e

// #include <bits/stdc++.h>
// using namespace std;

// vector<pair<int, int>> get_coloring_order(int n, int m) {
//     int cx = (n + 1) / 2;
//     int cy = (m + 1) / 2;

//     vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));
//     queue<pair<int, int>> q;
//     q.push({cx, cy});
//     visited[cx][cy] = true;

//     vector<pair<int, int>> order;

//     while (!q.empty()) {
//         auto [x, y] = q.front(); q.pop();
//         order.push_back({x, y});

//         for (int dx = -1; dx <= 1; dx++) {
//             for (int dy = -1; dy <= 1; dy++) {
//                 int nx = x + dx;
//                 int ny = y + dy;
//                 if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !visited[nx][ny]) {
//                     visited[nx][ny] = true;
//                     q.push({nx, ny});
//                 }
//             }
//         }
//     }

//     // Sort by chessboard distance from center, then by Manhattan distance
//     sort(order.begin(), order.end(), [cx, cy](pair<int, int> a, pair<int, int> b) {
//         int da = max(abs(a.first - cx), abs(a.second - cy));
//         int db = max(abs(b.first - cx), abs(b.second - cy));
//         if (da != db) return da < db;
//         int ma = abs(a.first - cx) + abs(a.second - cy);
//         int mb = abs(b.first - cx) + abs(b.second - cy);
//         return ma < mb;
//     });

//     return order;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         auto order = get_coloring_order(n, m);
//         for (auto [x, y] : order)
//             cout << x << " " << y << '\n';
//     }

//     return 0;
// }
// </div>
