# Task Manager

Task Manager is a simple command-line application written in C that allows users to manage their tasks efficiently. Users can add, remove, update, and list tasks using the provided functionalities.

## Features

- Add tasks with unique IDs, titles, descriptions, statuses, and priorities.
- Remove tasks based on their IDs.
- Update task attributes such as title, description, status, and priority.
- List all tasks in a tabular format, displaying their details.

## Prerequisites

Before running the Task Manager application, ensure that you have the following prerequisites installed on your system:

- C Compiler (e.g., GCC)
- Operating System: Windows, macOS, Linux

## Installation

1. **Clone the repository:**

    ```bash
    git clone https://github.com/davitmartirosyan/task-manager.git
    ```

2. **Navigate to the project directory:**

    ```bash
    cd task-manager
    ```

3. **Compile the source code using the provided Makefile:**

    ```bash
    make
    ```

4. **Run the executable file:**

    ```bash
    ./manager
    ```

## Usage

Once the Task Manager application is running, you can use the following commands to manage tasks:

- `create`: Create a new task to the task list.
- `read`: Read an existing task from the task list.
- `update`: Update attributes of an existing task.
- `delete`: Delete an existing task from the task list.
- `list`: List all tasks in the task list.