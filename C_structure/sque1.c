#include<stdio.h>

//que 1
typedef struct {
    char name[10];
    int age;
    float marks;
}student;

student scan(){
    student s;
    
    printf("\nEnter name :");
    scanf(" %[^\n]s",&s.name);

    printf("\nEnter age : ");
    scanf("%d",&s.age);

    printf("\nEnter marks : ");
    scanf("%f",&s.marks);

    fflush(stdin);
    return s;
}
void print(student s){
    // student s;

    printf("\nStudent details : \nName : %s\nAge : %d\nMarks : %.2f\n",s.name,s.age,s.marks);
}

int avgmarks(student *s){
    int avg_marks = (s[0].marks+s[1].marks)/2;
    return avg_marks;
}

void main(){
    student s[2];

    int marks1,marks2;

    for (int i = 0; i < 2; i++){
        s[i]=scan();
    }
    // marks1 = s[0].marks;
    // marks2 = s[1].marks;


    // fflush;
    for (int i = 0; i < 2; i++){
        print(s[i]);
    }
    
    // printf("Total avarage marks : %d",avgmarks(s->marks[0],s->marks[1]););
    int avarage_marks = avgmarks(s);
    printf("\n\nAvarage marks: %d", avarage_marks);


}
/*
    Display information for both students
    printf("\nStudent 1 Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);

    // Calculate and display the average total marks
    float averageMarks = (student1.totalMarks + student2.totalMarks) / 2;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);
*/