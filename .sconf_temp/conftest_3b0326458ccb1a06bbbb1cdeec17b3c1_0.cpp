
    #include <vector>
    int main() {
        std::vector<int> v = {1, 2, 3, 4, 5};
        int sum = 0;
        for (auto i : v) {
            sum += i;
        }
        return sum;
    }
    