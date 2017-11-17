#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

class list
{
  private:
  node *head, *tail;
  public:
  list()
  {
    head = NULL;
    tail = NULL;
  }


void addnode(int val)
{
  node *temp = new node;
  temp->data = val;
  temp->next = NULL;
  if (head == NULL)
  {
    head = temp;
    tail = temp;
    temp = NULL;
  }
  else
  {
    tail->next = temp;
    tail = temp;

  }
}

void display()
{

  node *temp = new node;
  temp = head;
  while (temp!= NULL)
  {
    cout << temp->data << "\t";
    temp = temp->next;
  }
}

void insertnode(int pos, int val)
{
  node *pre = new node;
  node *cur = new node;
  node *temp = new node;
  cur = head;
  if (pos == 1){
    temp->data = val;
    temp->next = head;
    head = temp; 
  }
  else{
  for (int i=1;i<pos;i++)
  {
    pre = cur;
    cur = cur->next;
  }
  temp->data = val;
  pre->next = temp;
  temp->next = cur;
  }
}

void deletenode(int pos)
{
  node *pre = new node ;
  node *cur = new node;
  cur = head;
  if (pos == 1){
    head = head->next;
    delete cur;}
  else{
    for (int i=1;i<pos;i++){
    pre = cur;
    cur = cur->next;}
    pre->next = cur->next;
    if (cur->next == NULL){
    tail = pre;}
  }
}
};

int main()
{
  int L = 0;
  int b = 0;
  list M;
  cout << "enter L: ";
  cin >> L;
  for (int j = 0; j<L;j++)
  {
    cin >> b;
    M.addnode(b);}
  M.display(); 
  return 0;

}
