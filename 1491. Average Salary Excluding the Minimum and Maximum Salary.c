double average(int* salary, int salarySize) {
    double max = 0, min = salary[0], sum = 0;
    double avg;

    for (int i = 0; i < salarySize; i++) {
        sum = sum + salary[i];

        if (salary[i] > max) {
            max = salary[i];
            continue;
        } else if (salary[i] < min) {
            min = salary[i];
            continue;
        }
    }


    return (avg = (sum - max - min) / (salarySize - 2));
}
