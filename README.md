# Prerequisite
Before start, you must have git already installed on your machine.
On Ubuntu >= 18, just type:
```bash
sudo apt-get update
sudo apt-get install git-all
```
On Windows, please install via [installer](https://git-scm.com/download/win) 
# Init working directory
You can download source code via command
```bash
git clone https://github.com/Thai-Ngo/GitWorkshop.git
```Or just download source code as zip file

# Init
If you download source code via `git clone`, your working directory is already haved a `.git` folder.
Otherwise, you must init `.git` via command
```bash
git init
```
1. Download public reposition with zip file. This zip file contain main.cpp file and README.md file.
	- The main.cpp file contain two important function (factorial and sumOfArr)
	- The REAME.md file contain instructions that you must follow during our Workshop.
2. Type command
	git init
3. Type command
	git status
	git add main.cpp
	git commit -m "MAIN: Initilize main.cpp file"
4. Change the content of the sumOfArr function for non-recursion version of this function.
   Type command:
    git status
    git stash
5. Type command:
	git branch
	git branch dev
	git branch
	git checkout dev
   Implement factorial function with non-recursion version.
   Type command:
    git add main.cpp
    git commit -m "DEV: Implementation factorial function in non-recursion style"
   Then, type command:
    git checkout main
    git merge
6. Type command:
    git checkout dev
   Implement factorial function with recursion version.
   Type command:
    git add main.cpp
    git commit -m "DEV: Implementation factorial function in recursion style"
7. Change the content in factorial function (example: print result before return)
   Type command:
    git checkout main
    git add main.cpp
    git commit -m "MAIN: Print result before return in factioral function"
   Type command
    git merge
8. Fix conflict in main.cpp by delete all the main branch content in factorial function
   Type command:
    git add main.cpp
    git commit -m "MAIN: Fix conflict in factorial function"
9. Type command:
    git log
