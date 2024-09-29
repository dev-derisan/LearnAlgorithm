// https://www.acmicpc.net/problem/1991

#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

struct Case {
  char data;
  Case* leftChild;
  Case* rightChild;

  Case(char _data) : data{_data}, leftChild(nullptr), rightChild(nullptr) {}
};

void TraversePreorder(const Case* node) {
  if (!node || node->data == '.') {
    return;
  }

  std::cout << node->data;
  TraversePreorder(node->leftChild);
  TraversePreorder(node->rightChild);
}

void TraverseInorder(const Case* node) {
  if (!node || node->data == '.') {
    return;
  }

  TraverseInorder(node->leftChild);
  std::cout << node->data;
  TraverseInorder(node->rightChild);
}

void TraversePostorder(const Case* node) {
  if (!node || node->data == '.') {
    return;
  }

  TraversePostorder(node->leftChild);
  TraversePostorder(node->rightChild);
  std::cout << node->data;
}

void P1991() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n{};
  std::cin >> n;

  std::vector<Case> nodes;
  nodes.reserve(26);
  for (int i = 0; i < 26; ++i) {
    nodes.emplace_back('A' + i);
  }

  for (int i = 0; i < n; ++i) {
    char parent, leftChild, rightChild;
    std::cin >> parent >> leftChild >> rightChild;

    if (leftChild != '.')
      nodes[parent - 'A'].leftChild = &nodes[leftChild - 'A'];

    if (rightChild != '.')
      nodes[parent - 'A'].rightChild = &nodes[rightChild - 'A'];
  }

  TraversePreorder(&nodes[0]);
  std::cout << "\n";
  TraverseInorder(&nodes[0]);
  std::cout << "\n";
  TraversePostorder(&nodes[0]);
}