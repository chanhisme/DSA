#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string file_path;

    // Tự động kiểm tra hệ điều hành lúc compile
    #if defined(_WIN32) || defined(_WIN64)
        // Nếu là Windows
        file_path = R"(D:\A_Programming\my_src_code\DSA\problem.txt)";
    #elif defined(__linux__)
        // Nếu là Linux 
        // ⚠️ BẠN CẦN SỬA ĐOẠN NÀY: Thay bằng đường dẫn mà Linux mount ổ D của bạn vào nhé!
        // Thường nó sẽ nằm trong /media/chanh/... hoặc /mnt/...
        file_path = "/media/chanh/DATA/A_Programming/my_src_code/DSA/problem.txt"; 
    #else
        file_path = "problem.txt"; // Hệ điều hành khác thì dùng tạm tương đối
    #endif

    ifstream file(file_path);
    
    if (!file.is_open()) {
        cerr << "❌ Không thể mở file bài tập!\n";
        cerr << "📍 Đường dẫn chương trình vừa cố mở là: " << file_path << "\n";
        cerr << "👉 Mẹo cho Dual-boot:\n";
        #if defined(__linux__)
        cerr << "   - Hãy kiểm tra xem trên Linux bạn đã MOUNT (mở) ổ D chưa.\n";
        cerr << "   - Đảm bảo đường dẫn '/media/...' trong code trùng với thực tế trên Linux.\n";
        #endif
        return 1;
    }

    struct Problem {
        string content;
        size_t original_index;
    };

    vector<Problem> problems;
    problems.reserve(1000);

    string line;
    size_t line_counter = 0;

    while (getline(file, line)) {
        line_counter++;
        if (!line.empty()) {
            problems.push_back({move(line), line_counter});
        }
    }
    file.close();

    size_t total_problems = problems.size();
    if (total_problems == 0) {
        cout << "File bài tập trống!\n";
        return 0;
    }

    random_device rd;
    mt19937_64 gen(rd()); 
    uniform_int_distribution<size_t> distr(0, total_problems - 1);

    size_t random_index = distr(gen);
    const auto& chosen_problem = problems[random_index];

    cout << "========================================\n";
    cout << "📚 TỔNG SỐ BÀI TẬP HIỆN CÓ: " << total_problems << " bài\n";
    cout << "🎯 BÀI TẬP DSA DAILY CỦA NGÀY HÔM NAY:\n";
    cout << "🔢 Số thứ tự trong list: #" << chosen_problem.original_index << "\n";
    cout << "👉 " << chosen_problem.content << "\n";
    cout << "========================================\n";

    return 0;
}