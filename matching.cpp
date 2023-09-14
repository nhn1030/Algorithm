#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    double x, y;
};

// 두 점 사이의 거리를 계산하는 함수
double distance(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int n; // 점의 개수
    cin >> n;
    
    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    double minDistance = numeric_limits<double>::max(); // 최소 거리
    vector<Point> closestPoints(3); // 가까운 점 3개 저장
    
    // Brute Force: 모든 3개의 점 조합을 고려
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                double d = distance(points[i], points[j]) + distance(points[j], points[k]) + distance(points[k], points[i]);
                if (d < minDistance) {
                    minDistance = d;
                    closestPoints[0] = points[i];
                    closestPoints[1] = points[j];
                    closestPoints[2] = points[k];
                }
            }
        }
    }

    cout << "가장 가까운 3개의 점:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "(" << closestPoints[i].x << ", " << closestPoints[i].y << ")" << endl;
    }
    cout << "총 거리: " << minDistance << endl;

    return 0;
}
