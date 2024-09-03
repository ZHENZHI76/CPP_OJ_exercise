#include <iostream>
#include <cstdio>

using namespace std;

struct School {
    int cost;
    double prob;
};

double maxProbability(int n, int m, School schools[]) {
    double maxProb = 0.0;
    for (int mask = 1; mask < (1 << m); ++mask) {
        int totalCost = 0;
        double notGetOfferProb = 1.0;
        for (int i = 0; i < m; ++i) {
            if (mask & (1 << i)) {
                totalCost += schools[i].cost;
                notGetOfferProb *= (1 - schools[i].prob);
            }
        }
        if (totalCost <= n) {
            double getOfferProb = 1 - notGetOfferProb;
            maxProb = max(maxProb, getOfferProb);
        }
    }
    return maxProb;
}

int main() {
    int n, m;
    while (cin >> n >> m && (n != 0 || m != 0)) {
        School schools[m];
        for (int i = 0; i < m; ++i) {
            cin >> schools[i].cost >> schools[i].prob;
        }
        double result = maxProbability(n, m, schools);
        printf("%.1f%%\n", result * 100);
    }
    return 0;
}
