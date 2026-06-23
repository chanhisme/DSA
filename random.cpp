#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>

using namespace std;

int main() {
    // Tối ưu hóa tốc độ đọc ghi (I/O) của C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string file_path = "/home/chanh/Desktop/my_src_code/DSA/problem.txt";
    ifstream file(file_path);
    
    if (!file.is_open()) {
        cerr << "Không thể mở file tại đường dẫn: " << file_path << "\n";
        return 1;
    }

    // Định nghĩa một Struct để lưu cả nội dung bài và số thứ tự dòng gốc của nó
    struct Problem {
        string content;
        size_t original_index;
    };

    vector<Problem> problems;
    problems.reserve(1000); // Dự đoán trước dung lượng để tránh reallocate

    string line;
    size_t line_counter = 0;

    while (getline(file, line)) {
        line_counter++; // Đếm số dòng (bao gồm cả dòng trống nếu có)
        if (!line.empty()) {
            // Lưu nội dung bài kèm theo số thứ tự dòng của nó
            problems.push_back({move(line), line_counter});
        }
    }
    file.close();

    size_t total_problems = problems.size();

    if (total_problems == 0) {
        cout << "File bài tập trống! Hãy thêm danh sách bài tập vào file trước.\n";
        return 0;
    }

    // Đủ ngẫu nhiên: Dùng Bộ sinh số Mersenne Twister 64-bit kết hợp phần cứng random_device
    random_device rd;
    mt19937_64 gen(rd()); 
    uniform_int_distribution<size_t> distr(0, total_problems - 1);

    size_t random_index = distr(gen);

    // Lấy ra bài tập được chọn ngẫu nhiên
    const auto& chosen_problem = problems[random_index];

    cout << "========================================\n";
    cout << "📚 TỔNG SỐ BÀI TẬP HIỆN CÓ: " << total_problems << " bài\n";
    cout << "🎯 BÀI TẬP DSA DAILY CỦA NGÀY HÔM NAY:\n";
    cout << "🔢 Số thứ tự trong list: #" << chosen_problem.original_index << "\n";
    cout << "👉 " << chosen_problem.content << "\n";
    cout << "========================================\n";

    return 0;
}