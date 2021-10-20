#include <iostream>
#include <sstream>
#include <list>
#include <iterator>

using namespace std;

class HashTable{
public:
    int divisor, iter;
    list<pair<int, int>> table;
    HashTable(int divisor, int i);
    void hashInsert(int value);
    static void display(const list<pair<int, int>>&);

    const list<pair<int, int>> &getTable() const;
};

HashTable::HashTable(int divisor, int i) {
    this->divisor = divisor;
    this->iter = i;
    for (int j = 0; j < this->divisor; j++) {
        table.emplace_back(j,-1);
    }
}

void HashTable::hashInsert(int value) {
    int d = this->divisor;
    for (auto it = table.begin();; it++) {
        if (it->first == value%d) {
            if (it->second == -1) {
                it->second = value;
            } else {
                while (true) {
                    if (it->second == -1) {
                        it->second = value;
                        break;
                    }
                    for (int k = 0; k < iter; k++) {
                        if (next(it, 1) == table.end()) {
                            it = table.begin();
                        } else {
                            it++;
                        }
                    }
                }
            }
        } if (it->second == value) {
            break;
        }
    }
}


void HashTable::display(const list<pair<int, int>>& table) {
    for (const auto & it : table) {
        cout << it.second << endl;
    }
}

const list<pair<int, int>> &HashTable::getTable() const {
    return table;
}

int main() {

    int D, i;
    cin >> D >> i;

    HashTable hash(D, i);
    string line;
    int temp;
    getline(cin, line);
    while(getline(cin, line)) {
        istringstream iss(line);
        while (iss >> temp) {
            hash.hashInsert(temp);
        }
        if(line.empty()) {
            break;
        }
    }

    hash.display(hash.getTable());

    return 0;
}
