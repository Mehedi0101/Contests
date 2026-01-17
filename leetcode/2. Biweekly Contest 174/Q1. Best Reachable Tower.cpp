class Solution
{
public:
    vector<int> bestTower(vector<vector<int>> &towers, vector<int> &center,
                          int radius)
    {
        stack<vector<int>> reachable;

        for (vector<int> tower : towers)
        {
            int x = abs(tower[0] - center[0]) + abs(tower[1] - center[1]);
            if (x <= radius)
            {
                if (reachable.empty())
                {
                    reachable.push(tower);
                }
                else
                {
                    vector<int> v1 = reachable.top();
                    vector<int> v2 = tower;

                    if (v2[2] > v1[2])
                    {
                        reachable.pop();
                        reachable.push(tower);
                    }
                    else if (v2[2] == v1[2])
                    {
                        if (v2[0] < v1[0])
                        {
                            reachable.pop();
                            reachable.push(tower);
                        }
                        else if (v2[0] == v1[0])
                        {
                            if (v2[1] < v1[1])
                            {
                                reachable.pop();
                                reachable.push(tower);
                            }
                        }
                    }
                }
            }
        }

        vector<int> ans;

        if (reachable.empty())
            ans = {-1, -1};
        else
            ans = {reachable.top()[0], reachable.top()[1]};
        return ans;
    }
};