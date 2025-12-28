# Project Status

This list tracks the implementation status of each command using a 5-level maturity scale.

### Legend
- [ ] **Level 0: TBD** - Not yet started.

- [x] **Level 1: Minimal** - Bare minimum logic. May lack error handling or standard outputs.

- [x] **Level 2: Basic** - Works for standard use cases, but missing most flags/options.

- [x] **Level 3: Intermediate** - Supports common flags/options used in daily tasks.

- [x] **Level 4: Near-POSIX** - Almost compliant, but lacks edge-case handling or specific POSIX flags.

- [x] **Level 5: POSIX Compliant** - Fully meets the IEEE Std 1003.1 (POSIX) specifications.

---

### Command List

- [x] **basename**: **Level 1** - Basic filename extraction using strrchr.

- [x] **cat**: **Level 2** - Supports reading from files and stdin.

- [x] **cp**: **Level 1** - Basic file-to-file copying using `fgetc` and `fputc`.

- [x] **dirname**: **Level 2** - Handles trailing slashes and multiple slashes.

- [x] **echo**: **Level 3** - Supports `-n` flag.

- [x] **env**: **Level 1** - Lists environment variables using `envp`.

- [x] **false**: **Level 5** - POSIX compliant.

- [x] **hostname**: **Level 2** - Basic functionality.

- [x] **logname**: **Level 4** - Near-POSIX (Note: known issues with `getlogin()`).

- [x] **mv**: **Level 1** - Renames files using the standard `rename()` function.

- [ ] **ls**: **Level 0** - TBD.

- [ ] **mkdir**: **Level 0** - TBD.

- [x] **pwd**: **Level 3** - Retrieves current directory path.

- [x] **sleep**: **Level 2** - Basic functionality.

- [x] **true**: **Level 5** - POSIX compliant.

- [x] **tty**: **Level 5** - POSIX compliant. Supports `-s` flag.

- [x] **uname**: **Level 1** - Basic system name output only.

- [x] **whoami**: **Level 1** - Prints the effective user name.

- [x] **yes**: **Level 2** - Basic functionality (High-performance buffer implementation).
