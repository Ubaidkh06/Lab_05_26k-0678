#include <stdio.h>

int main(void)
{
    int accuracy, confidence, dataset, role, status;
    float score, avg;

    printf("Enter Accuracy (0-100): ");
    scanf("%d", &accuracy);

    printf("Enter Confidence score (0-100): ");
    scanf("%d", &confidence);

    printf("Enter Dataset size: ");
    scanf("%d", &dataset);

    printf("Enter User role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    scanf("%d", &role);

    printf("Enter Status flags (1=TRAINED, 2=VALIDATED, 4=APPROVED, 8=DEPRECATED): ");
    scanf("%d", &status);

    score = (accuracy * 0.5) + (confidence * 0.3) + ((dataset / 1000.0) < 10 ?  (dataset / 1000.0) : 10) * 2;
    printf("model score: %0.2f\n", score);

    if ((status & 8) == 8)
    {
        printf("Rejected: model deprecated\n");
    }
    else if ((status & 1) != 1)
    {
        printf("Rejected: not trained\n");
    }
    else if ((status & 2) != 2)
    {
        printf("Rejected: not validated\n");
    }
    else if ((status & 4) != 4)
    {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70 || confidence < 60)
    {
        printf("Rejected: performance too low\n");
    }
    else if (dataset < 5000)
    {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1)
    {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && score < 80)
    {
        printf("Denied: engineer needs higher score\n");
    }
    else
    {
        printf("Approved for deployment\n");
    }

    printf("size of accuracy: %d\n",sizeof(accuracy));
    printf("size of confidence: %d\n",sizeof(confidence));
    printf("size of dataset: %d\n",sizeof(dataset));
    printf("size of role: %d\n",sizeof(role));
    printf("size of status: %d\n",sizeof(status));
    printf("size of score: %d\n",sizeof(score));
    printf("size of avg: %d\n",sizeof(avg));


    avg = (confidence + accuracy) / 2.0;

    if (score > avg)
    {
        printf("Model score is above the average of accuracy and confidence.\n");
    }
    else
    {
        printf("Model score is not above the average of accuracy and confidence.\n");
    }

    return 0;
}