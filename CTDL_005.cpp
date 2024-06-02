#include <iostream>

// Định nghĩa cấu trúc cho một nút trong danh sách liên kết đơn
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Hàm để thêm một phần tử vào cuối danh sách
void append(Node*& head, int value) {
    Node* new_node = new Node(value);
    if (head == nullptr) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// Hàm để xóa tất cả các phần tử có giá trị bằng x và trả về số lượng các phần tử đã bị xóa
int deleteAll(Node*& head, int x) {
    Node* current = head;
    Node* prev = nullptr;
    int deletedCount = 0;

    while (current != nullptr) {
        if (current->data == x) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            current = prev == nullptr ? head : prev->next;
            deletedCount++;
        } else {
            prev = current;
            current = current->next;
        }
    }

    return deletedCount;
}

// Hàm để liệt kê các phần tử còn lại trong danh sách liên kết đơn
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* First = nullptr;
    int n;
    int x;

    // Nhập số lượng phần tử trong danh sách và giá trị cần xóa
    
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        append(First, value);
    }

    
    std::cin >> x;

    // Xóa các phần tử có giá trị bằng x và lấy số lượng đã xóa
    int deletedCount = deleteAll(First, x);

    // Liệt kê các phần tử còn lại trong danh sách
    
    printList(First);

    // Giải phóng bộ nhớ khi kết thúc chương trình
    while (First != nullptr) {
        Node* temp = First;
        First = First->next;
        delete temp;
    }

    return 0;
}