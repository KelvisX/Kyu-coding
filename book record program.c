 #include <stdio.h>#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, dateOverdue;
    float fine;

    printf("Enter book id.\n");
    scanf("%d", &bookID);

    printf("Enter due date.\n");
    scanf("%d", &dueDate);

    printf("Enter book return date.\n");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    dateOverdue = returnDate - dueDate;

    if (dateOverdue <= 7) {
        fine = 20 * dateOverdue;
    } else if (dateOverdue <= 14) {
        fine = (7 * 20) + ((dateOverdue - 7) * 50);
    } else {
        fine = (7 * 20) + (7 * 50) + ((dateOverdue - 14) * 100);
    }

    // Display solutions
    printf("Book ID: %d\n", bookID);
    printf("dueDate: %d\n", dueDate);
    printf("returnDate%d\n",returnDate);
    printf("dateOverdue%d\n",dateOverdue);

    return 0;
}