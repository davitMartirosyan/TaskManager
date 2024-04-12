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
    git clone https://github.com/your-username/task-manager.git
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
    ./task_manager
    ```

## Usage

Once the Task Manager application is running, you can use the following commands to manage tasks:

- `add`: Add a new task to the task list.
- `remove`: Remove an existing task from the task list.
- `update`: Update attributes of an existing task.
- `list`: List all tasks in the task list.

For detailed usage instructions and command syntax, refer to the [User Manual](./docs/user-manual.md).

## Contributing

Contributions to the Task Manager project are welcome! To contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature`)
3. Make your changes and commit them (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature`)
5. Create a new Pull Request.

## License

This project is licensed under the [MIT License](./LICENSE).
