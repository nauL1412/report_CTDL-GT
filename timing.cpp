#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

int main() {
    // Khởi tạo bộ đo thời gian
    auto start_time = chrono::high_resolution_clock::now();

    // Thực hiện thuật toán
    // Ví dụ: tính tổng từ 1 đến 1000000
    long long sum = 0;
    for (int i = 1; i <= 1000000; i++) {
        sum += i;
    }

    // Kết thúc bộ đo thời gian
    auto end_time = chrono::high_resolution_clock::now();

    // Tính thời gian thực hiện và in ra kết quả
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count();
    cout << "Thoi gian thuc hien: " << fixed << setprecision(3) << duration << " ms" << endl;

    return 0;
}
