#include <iostream>
using namespace std;

struct list {
  int value;
  list *next;
  list(int data) : value(data), next(nullptr) {}
};

void append(list *&head, int val) {
  list *newlist = new list(val);
  if (head == nullptr) {
    head = newlist;
    return;
  }
  list *current = head;
  while (current->next != nullptr) {
    current = current->next;
  }
  current->next = newlist;
}

void addlist(list *&head) {
  int n, b;
  cout << "Введите количество значений: " << endl;
  cin >> n;
  cout << "Введите элементы списка: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> b;
    append(head, b);
  }
}

void display(list *head) {
  if (head == nullptr) {
    cout << "Список пуст!" << endl;
  }

  list *current = head;
  while (current != nullptr) {
    cout << current->value;
    if (current->next != nullptr) {
      cout << " -> ";
    }
    current = current->next;
  }
  cout << endl;
}

void dellist(list *&head) {
  while (head != nullptr) {
    list *temp = head;
    head = head->next;
    delete temp;
  }
}

void delval(list *&head, int val) {
  while (head != nullptr && head->value == val) {
    list *temp = head;
    head = head->next;
    delete temp;
  }

  if (head == nullptr)
    return;

  list *current = head;
  while (current->next != nullptr) {
    if (current->next->value == val) {
      list *temp = current->next;
      current->next = temp->next;
      delete temp;
    } else {
      current = current->next;
    }
  }
}

int main() {
  int d;
  list *head = nullptr;
  addlist(head);
  display(head);
  cout << "Удалить из списка: ";
  cin >> d;
  cout << endl;
  delval(head, d);
  display(head);
  dellist(head);
}
