# 🎵 Song Playlist Using Doubly Linked List in C

## 📌 Description
This program demonstrates the implementation of a **song playlist** using a **Doubly Linked List** in the C programming language.  
Each node stores song details such as **song name**, **singer name**, and **release year**, and allows navigation **forward (next song)** and **backward (previous song)** similar to a real music player.

---

## 🧩 Data Structures Used

### 1. SONG Structure
```c
struct SONG {
    char songName[30];
    char singerName[30];
    int year;
};
Stores information related to a song.

2. NODE Structure (Doubly Linked List Node)
c
Copy code
struct NODE {
    struct SONG song;
    struct NODE *prev;
    struct NODE *next;
};
prev → Pointer to previous song

next → Pointer to next song

⚙️ Functions Implemented
🔹 createNode()
Allocates memory for a new node

Initializes song details

Sets prev and next pointers to NULL

🔹 insertEnd()
Inserts a new song at the end of the playlist

Maintains both prev and next links

🔹 createPlayList()
Creates a predefined playlist by inserting songs using insertEnd()

🔹 nextSong()
Moves to the next song

Displays song details

Handles case when no next song is available

🔹 prevSong()
Moves to the previous song

Displays song details

Handles case when no previous song is available

🧠 Working Logic
The playlist is implemented using a doubly linked list

Navigation is done by moving the current pointer:

Forward using next

Backward using prev

Menu-driven interface allows user interaction

📋 Menu Options
mathematica
Copy code
1 → Play previous song
2 → Play next song
3 → Exit playlist
▶️ Sample Output
vbnet
Copy code
Now Playing: Jothe Jotheyali
Singer: S. P. Balasubrahmanyam
Year: 1981

Menu:
1 for previous song
2 for next song
3 for exit
⏱️ Time & Space Complexity
Insertion at end: O(n)

Next/Previous navigation: O(1)

Space complexity: O(n)

✅ Key Concepts Covered
Doubly Linked List

Dynamic memory allocation (malloc)

Structures and nested structures

Menu-driven programming

Pointer manipulation

🧪 How to Compile and Run
bash
Copy code
gcc playlist.c -o playlist
./playlist
📚 Use Cases
Academic mini-projects

Data Structures lab programs

Understanding real-world use of doubly linked lists

Music playlist simulation