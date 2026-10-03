#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string playerName;
    Node* next;

    Node(string name)
    {
        playerName = name;
        next = NULL;
    }
};

class Game
{
private:
    Node* head;
    Node* tail;

public:

    Game()
    {
        head = NULL;
        tail = NULL;
    }

    void addPlayer(string name)
    {
        Node* newNode = new Node(name);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;

            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;

            tail->next = head;
        }
    }

    void displayTurns()
    {
        Node* current = head;

        cout << "Player Turns:" << endl;

        if (head != NULL)
        {
            do
            {
                cout << current->playerName << endl;
                current = current->next;

            } while (current != head);
        }
    }

    void showNextTurn()
    {
        Node* current = head;

        cout << "\nAfter the last player, turn returns to: ";

        while (current->next != head)
        {
            current = current->next;
        }

        cout << current->next->playerName << endl;
    }
};

int main()
{
    Game game;

    game.addPlayer("Ali");
    game.addPlayer("Ahmed");
    game.addPlayer("Sara");
    game.addPlayer("Usman");
    game.addPlayer("Hamza");

    game.displayTurns();

    game.showNextTurn();

    return 0;
}