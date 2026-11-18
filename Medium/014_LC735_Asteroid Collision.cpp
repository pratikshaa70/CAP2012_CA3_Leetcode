#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> result;

        for (int asteroid : asteroids) {

            bool destroyed = false;

            while (!result.empty() && asteroid < 0 && result.back() > 0) {

                if (result.back() < -asteroid) {
                    result.pop_back();
                }
                else if (result.back() == -asteroid) {
                    result.pop_back();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                result.push_back(asteroid);
            }
        }

        return result;
    }
};

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> result;

        for (int asteroid : asteroids) {

            bool destroyed = false;

            while (!result.empty() && asteroid < 0 && result.back() > 0) {

                if (result.back() < -asteroid) {
                    result.pop_back();
                }
                else if (result.back() == -asteroid) {
                    result.pop_back();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                result.push_back(asteroid);
            }
        }

        return result;
    }
};
