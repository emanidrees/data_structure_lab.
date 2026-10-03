#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string website;
    Node* prev;
    Node* next;

    Node(string name)
    {
        website = name;
        prev = NULL;
        next = NULL;
    }
};

class BrowserHistory
{
private:
    Node* head;
    Node* tail;

public:

    BrowserHistory()
    {
        head = NULL;
        tail = NULL;
    }

    void addWebsite(string name)
    {
        Node* newNode = new Node(name);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward()
    {
        Node* current = head;

        cout << "Browser History (First to Last):" << endl;

        while (current != NULL)
        {
            cout << current->website << endl;
            current = current->next;
        }
    }

    void displayReverse()
    {
        Node* current = tail;

        cout << "\nBrowser History (Last to First):" << endl;

        while (current != NULL)
        {
            cout << current->website << endl;
            current = current->prev;
        }
    }
};

int main()
{
    BrowserHistory history;

    history.addWebsite("Google");
    history.addWebsite("YouTube");
    history.addWebsite("Facebook");
    history.addWebsite("GitHub");
    history.addWebsite("Wikipedia");

    history.displayForward();

    history.displayReverse();

    return 0;
}