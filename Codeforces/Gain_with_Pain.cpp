#include <iostream>
#include <vector>

using namespace std;

bool isConsistent(int N, const vector<vector<int>>& back, const vector<vector<int>>& legs, const vector<vector<int>>& chest, const vector<vector<int>>& shoulder, const vector<vector<int>>& arm) {
    int targetExercises = 2, targetSets = 3, targetReps = 10;

    for (int i = 0; i < N; ++i) {
        if (back[i].size() != targetExercises || legs[i].size() != targetExercises || chest[i].size() != targetExercises || shoulder[i].size() != 1 || arm[i].size() != 3) {
            return false;
        }

        for (int j = 0; j < back[i].size(); ++j) {
            if (back[i][j] != targetSets || legs[i][j] != targetSets || chest[i][j] != targetSets || shoulder[i][0] != targetSets) {
                return false;
            }

            for (int k = 0; k < back[i][j]; ++k) {
                if (arm[i][k] != targetReps) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<vector<int>> back(N), legs(N), chest(N), shoulder(N), arm(N);

        for (int i = 0; i < N; ++i) {
            cin >> back[i][0] >> back[i][1] >> back[i][2];
            cin >> legs[i][0] >> legs[i][1] >> legs[i][2];
            cin >> chest[i][0] >> chest[i][1] >> chest[i][2];
            cin >> shoulder[i][0];
            cin >> arm[i][0] >> arm[i][1] >> arm[i][2];
        }

        if (isConsistent(N, back, legs, chest, shoulder, arm)) {
            cout << "Consistent" << endl;
        } else {
            cout << "Inconsistent" << endl;
        }
    }

    return 0;
}