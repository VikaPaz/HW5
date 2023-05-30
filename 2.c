#include <stdio.h>

struct Person {
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
    }
    float average = (float)sum / n;
    return average;
}

int main() {
    struct Person people[3]; // Пример массива
    people[0].age = 5;
    strcpy(people[0].name, "Аня");
    people[1].age = 20;
    strcpy(people[1].name, "Алина");
    people[2].age = 15;
    strcpy(people[2].name, "Игорь");
    int n = 3;
    
    float avg = averageAge(people, n);
    printf("Age: %.2f\n", avg);
    
    return 0;
}