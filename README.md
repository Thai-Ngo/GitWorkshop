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
```
Or just download source code as zip file.

# Source code description
- The `main.cpp` file contain two important function (_factorial_ and _sumOfArr_) 
- The `REAME.md` file contain some descriptions and instructions that you should follow during Workshop.

# Init
If you download source code via `git clone`, your working directory is already haved a `.git` folder.
Otherwise, you must init `.git` via command
```bash
git init
```
# Try adding and commiting a file
First, change somthing in main.cpp. If you use VSCode (with extensions installed) or some IDEs, you will see status of the file on tree folder.
Or you can see status of the file via command:
```bash
git status
```
To add changed file `main.cpp`, use
```bash
git add main.cpp
```
To save all staged changes:
```bash
git commit -m "<some_description>"
```

# Save working on a branch without commit
Change logic of function `sumOfArr` from recursive version to non-recursive version (using for loop).
See current status: 
```bash
git status
```
Save changes and push to a stack:
```bash
git stash
```
# Git branch
To see list of local branches:
```bash
git branch
```
Create a new branch with name:
```bash
git branch <new_branch_name>
```
Switch to an existed branch:
```bash
git checkout <existed_branch_name>
```
Create and switch to a new branch:
```bash
git checkout -b <new_branch_name>
```

In this example, you will create a branch named `dev`.
# Merging
## Fast-forward merge
Implement factorial function with non-recursion version. Notice that you are on `dev` branch.
Then run the following commands:
```bash
git add main.cpp
git commit -m "DEV: Implementation factorial function in non-recursion style"
```
Return `main` branch and merge `dev` branch:
```bash
git checkout main
git merge
```

## Three-way merge
Now you should checkout `dev` branch:
```bash
git checkout dev
```
After that, modify somethings (ex, reimplementing with recursion version ...) in `factorial` function.
Type following commands to commit changes:
```bash
git add main.cpp
git commit -m "DEV: Implementation factorial function in recursion style"
```

Return branch `main`, modify somethings (ex, print result before return ...) and commit changes in branch `main`
```bash
git checkout main
```

```bash
git add main.cpp
git commit -m "MAIN: Print result before return in factioral function"
```

Finally, merge `dev` branch to `main` branch:
```bash
git merge
```

Now, you can see some conflicts in your `main.cpp` file. Fix conflicts manually.
In three-way merging, you must create a new commit to apply merge result:
```bash
git add main.cpp
git commit -m "MAIN: Fix conflict in factorial function"
```
# Check your local git's history graph    
```bash
git log --graph
```
