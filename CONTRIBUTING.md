# Contributing to Wanabin

First off, thank you for considering contributing to Wanabin! 🛠️ It's a small project with big goals, and every bit of help makes a difference.

## How Can I Contribute?

### 1. Implement a New Command (Level 0 → 1)
Check the [Command List in src/README.md](src/README.md). If you see a command marked as **Level 0 (TBD)**, feel free to implement a minimal version to get it to **Level 1**.

### 2. Upgrade Existing Commands (Level 1-4 → 5)
Many tools currently support only basic functionality. You can help by:

- Adding missing POSIX flags.

- Improving error handling.

- Ensuring compliance with IEEE Std 1003.1.

### 3. Refine Documentation
Clear code needs clear explanation. You can:

- Add comments to existing C files.

- Improve README descriptions or fix typos.

### 4. Propose New Commands
If you want to implement a command that is not yet listed in `src/README.md`, feel free to start! 

Don't worry about making it "perfect" or fully POSIX-compliant from the start. As long as it's a standard tool (like `whoami`, `cal`, etc.), your contribution is welcome. We can work together to refine it later!

### 5. Keep it Independent (No Dependencies)
To maintain the simplicity and portability of each tool:

- **Zero Inter-dependency**: Each command's source code must be independent. For example, `cat.c` should not rely on functions defined in `ls.c`.

- **Standard Libraries Only**: Please stick to standard C libraries (`libc`) and POSIX headers as much as possible.

## Development Workflow
1. **Fork** the repository.

2. **Create a branch** for your feature or fix.

3. **Write code** and test it using the `Makefile`.

4. **Submit a Pull Request** with a brief description of your changes.

## Code of Conduct
Please be respectful and kind. We're all here to learn and build something cool together. Harassment or insults will not be tolerated.

---
*If you're unsure where to start, feel free to open an Issue and ask!*
