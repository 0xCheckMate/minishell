Minishell
https://sdmntprukwest.oaiusercontent.com/files/00000000-ee68-6243-9a0c-e382602ced6a/raw?se=2025-06-21T14%3A35%3A33Z&sp=r&sv=2024-08-04&sr=b&scid=23fe2861-b692-57b8-8430-b9c20565ee90&skoid=0a4a0f0c-99ac-4752-9d87-cfac036fa93f&sktid=a48cca56-e6da-484e-a814-9c849652bcb3&skt=2025-06-20T18%3A16%3A13Z&ske=2025-06-21T18%3A16%3A13Z&sks=b&skv=2024-08-04&sig=c/qCVUmc0TNPipDisdHLCJink2JT6590kkhXdE6iPs8%3D

A simple UNIX command-line interpreter (shell) written in C, implementing a subset of bash features.

Features
Mandatory Part
Prompt display with current working directory

Command history (up/down arrows to navigate)

Command execution:

Absolute paths (/bin/ls)

Relative paths (./minishell)

PATH resolution (ls, grep, etc.)

Quoting:

Single quotes (') - preserves literal value

Double quotes (") - allows variable expansion

Redirections:

Input (<)

Output (>, >> for append)

Heredoc (<<)

Pipes (|) - multiple commands chained together

Environment variables ($VAR expansion)

Special variables ($? for exit status)

Signal handling:

Ctrl-C (interrupt)

Ctrl-D (EOF)

Ctrl-\ (quit)

Builtins:

echo with -n option

cd

pwd

export

unset

env

exit

Installation
Prerequisites
macOS (tested on recent versions)

Homebrew package manager

Xcode Command Line Tools

Compilation Steps
Install readline library:

bash
brew install readline
Clone the repository:

bash
git clone https://github.com/yourusername/minishell.git
cd minishell
Compile the project:

bash
make
This will create the minishell executable.

Run the shell:

bash
./minishell
Usage
Run the executable:

bash
./minishell
You'll see a prompt where you can enter commands:

text
$ 
Example commands:

bash
$ ls -la
$ echo "Hello $USER"
$ cat < file.txt | grep "search" > output.txt
$ exit
Makefile Targets
make or make all - Compiles the project

make clean - Removes object files

make fclean - Removes object files and the executable

make re - Recompiles the project

Project Structure
text
minishell/
├── Makefile
├── minishell.h
├── parsing/       # Command parsing and tokenization
├── execution/     # Command execution and redirection handling
├── built_in/      # Builtin command implementations
