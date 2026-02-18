#include <iostream>
using namespace std;

struct Node {
  int data;   // данные
  Node *next; // указатель на следующий элемент
  Node(int value) : data(value), next(nullptr) {}
};

void append(Node *&head, int value) {
  Node *newNode = new Node(value);

  if (head == nullptr) {
    head = newNode;
    return;
  }

  Node *current = head;
  while (current->next != nullptr) {
    current = current->next;
  }
  current->next = newNode;
}

void removeValue(Node *&head, int value) {
  while (head != nullptr && head->data == value) {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
  if (head == nullptr) {
    return;
  }
  Node *current = head;
  while (current->next != nullptr) {
    if (current->next->data == value) {
      Node *temp = current->next;
      current->next = temp->next;
      delete temp;
    } else {
      current = current->next;
    }
  }
}

void printList(Node *head) {
  if (head == nullptr) {
    cout << "Список пуст" << endl;
    return;
  }

  Node *current = head;
  while (current != nullptr) {
    cout << current->data;
    if (current->next != nullptr) {
      cout << " -> ";
    }
    current = current->next;
  }
  cout << endl;
}

void deleteList(Node *&head) {
  while (head != nullptr) {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}

void inputList(Node *&head) {
  int n, value;
  cout << "Введите количество элементов: ";
  cin >> n;
  cout << "Введите элементы списка: ";
  for (int i = 0; i < n; i++) {
    cin >> value;
    append(head, value);
  }
}

int main() {
  Node *head = nullptr;
  int choice, value;

  do {
    cout << "\n--- Меню ---" << endl;
    cout << "1. Создать список вручную" << endl;
    cout << "2. Использовать демонстрационный список" << endl;
    cout << "3. Вывести список" << endl;
    cout << "4. Удалить значение из списка" << endl;
    cout << "5. Очистить список" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите действие: ";
    cin >> choice;

    switch (choice) {
    case 1:
      deleteList(head);
      inputList(head);
      cout << "Список создан!" << endl;
      break;

    case 2: {
      deleteList(head);
      int demoValues[] = {5, 3, 7, 3, 9, 3, 1, 4, 3, 8};
      for (int val : demoValues) {
        append(head, val);
      }
      cout << "Создан демонстрационный список: ";
      printList(head);
      break;
    }

    case 3:
      cout << "Текущий список: ";
      printList(head);
      break;

    case 4:
      if (head == nullptr) {
        cout << "Список пуст!" << endl;
      } else {
        cout << "Введите значение для удаления: ";
        cin >> value;
        cout << "Исходный список: ";
        printList(head);
        removeValue(head, value);
        cout << "Список после удаления значения " << value << ": ";
        printList(head);
      }
      break;

    case 5:
      deleteList(head);
      cout << "Список очищен!" << endl;
      break;

    case 0:
      cout << "Программа завершена." << endl;
      break;

    default:
      cout << "Неверный выбор!" << endl;
    }
  } while (choice != 0);

  deleteList(head);

  return 0;
}
