#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>

using namespace std;

int main() {
    // 1. Khai báo đường dẫn file và vector chứa dữ liệu
    string file_path = "D:\\PROGRAMMING\\DSA\\problem.txt";
    vector<string> danh_sach_bai_toan;

    // 2. Mở file ở chế độ đọc
    ifstream file(file_path);
    if (!file.is_open()) {
        cerr << "Khong the mo file: " << file_path << endl;
        return 1;
    }

    // Tối ưu tốc độ: tăng buffer đọc file lên 1MB
    vector<char> buffer(1024 * 1024);
    file.rdbuf()->pubsetbuf(buffer.data(), buffer.size());

    // 3. Đọc từng dòng, lọc dòng trống và dòng đánh dấu nguồn
    string line;
    while (getline(file, line)) {
        if (!line.empty() && line.find("\"") == string::npos) {
            danh_sach_bai_toan.push_back(line);
        }
    }
    file.close();

    // 4. Kiểm tra có dữ liệu không
    if (danh_sach_bai_toan.empty()) {
        cerr << "Danh sach trong hoac khong co du lieu hop le." << endl;
        return 1;
    }

    // 5. Sinh số ngẫu nhiên thật để chọn một phần tử
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<size_t> dist(0, danh_sach_bai_toan.size() - 1);
    size_t index_ngau_nhien = dist(gen);

    // 6. In kết quả
    cout << "Tong so bai toan: " << danh_sach_bai_toan.size() << endl;
    cout << "Index ngau nhien: " << index_ngau_nhien << endl;
    cout << "Gia tri tai index:  " << danh_sach_bai_toan[index_ngau_nhien] << endl;

    return 0;
}