#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareProjects(pair<int, int>& p1, pair<int, int>& p2) {
return p1.second < p2.second;
}

int maximumProjectsEvaluated(int n, int k, vector<pair<int, int>>& projects) {
sort(projects.begin(), projects.end(), compareProjects);

int count = 0;
vector<bool> isEvaluated(n, false);

for (int i = 0; i < n; i++) {
int startTime = projects[i].first;
int endTime = projects[i].second;

if (k > 0) {
if (startTime >= endTime) {
count++;
k--;
isEvaluated[i] = true;
}
}

for (int j = 0; j < i; j++) {
if (!isEvaluated[j] && startTime >= projects[j].second) {
count++;
isEvaluated[j] = true;
}
}
}

return count;
}

int main() {
int n, k;
cin >> n >> k;

vector<pair<int, int>> projects(n);

for (int i = 0; i < n; i++) {
int startTime, endTime;
cin >> startTime >> endTime;

projects[i] = {startTime, endTime};
}

int maxProjects = maximumProjectsEvaluated(n, k, projects);

cout << maxProjects << endl;

return 0;
}
