#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> stacks(n);
    for (int i = 0; i < n; ++i) {
        int ki;
        cin >> ki;

        for (int j = 0; j < ki; ++j) {
            int type;
            cin >> type;

            stacks[i].push_back(type);
        }
    }

    bool isInitiallyProper = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < stacks[i].size(); ++j) {
            if (stacks[i][j] != i) {
                isInitiallyProper = false;
                break;
            }
        }
    }

    if (isInitiallyProper) {

    } else {

        while (true) {
            bool hasMovedContainers = false;

            for (int i = 0; i < n; ++i) {
                if (stacks[i].empty()) {
                    continue;
                }

                int topType = stacks[i].back();

                if (topType != i) {

                    int targetStack = topType;

                    if (!stacks[targetStack].empty()) {

                        if (stacks[targetStack].back() == topType) {

                            continue;
                        }
                    }


                    int fromStack = i;

                    cout << fromStack + 1 << " " << targetStack + 1 << endl;

                    int container = stacks[fromStack].back();
                    stacks[fromStack].pop_back();
                    stacks[targetStack].push_back(container);

                    hasMovedContainers = true;
                    break;
                }
            }

            if (!hasMovedContainers) {

                cout << 0 << endl;
                break;
            }
        }
    }

    return 0;
}

