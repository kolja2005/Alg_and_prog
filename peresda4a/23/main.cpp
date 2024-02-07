bool compare(std::string left_0, std::string right_0) {
    int count_1 = 0, count_2 = 0;
    int left = std::stoi(left_0);
    int right = std::stoi(right_0);

    int left_2 = left, right_2 = right;
    while (left > 0) {
        count_1 += left % 10;
        left /= 10;
    }
    while (right > 0) {
        count_2 += right % 10;
        right /= 10;
    }

    if (count_1 == count_2) {
        return left_2 < right_2;
    }
    return count_1 > count_2;

}