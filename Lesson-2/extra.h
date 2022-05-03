class person {
    public:
        char name[30];
        char address[30];
        int age;
        float height;
};

#define SIZE 5
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
}Book;

void populateCollection(struct Books books[]);

void readingCollection(struct Books books[]);