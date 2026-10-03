#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string songName;
    Node* next;

    Node(string name)
    {
        songName = name;
        next = NULL;
    }
};

class Playlist
{
private:
    Node* head;
    Node* tail;

public:

    Playlist()
    {
        head = NULL;
        tail = NULL;
    }

    void addSong(string name)
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

    void displayOnce()
    {
        Node* current = head;

        cout << "All Songs:" << endl;

        if (head != NULL)
        {
            do
            {
                cout << current->songName << endl;
                current = current->next;

            } while (current != head);
        }
    }

    void playTwoRounds()
    {
        Node* current = head;

        cout << "\nPlaying Playlist for 2 Rounds:" << endl;

        if (head != NULL)
        {
            for (int i = 1; i <= 10; i++)
            {
                cout << "Playing: " << current->songName << endl;

                current = current->next;
            }
        }
    }
};

int main()
{
    Playlist playlist;

    playlist.addSong("Perfect");
    playlist.addSong("Believer");
    playlist.addSong("Shape of You");
    playlist.addSong("Faded");
    playlist.addSong("Let Her Go");

    playlist.displayOnce();

    playlist.playTwoRounds();

    return 0;
}