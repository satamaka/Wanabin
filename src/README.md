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

- [x] **echo**: **Level 3** - Supports `-n` flag.

- [x] **false**: **Level 5** - POSIX compliant.

- [x] **hostname**: **Level 2** - Basic functionality.

- [x] **logname**: **Level 4** - Near-POSIX (Note: known issues with `getlogin()`).

- [ ] **ls**: **Level 0** - TBD.

- [ ] **mkdir**: **Level 0** - TBD.

- [x] **pwd**: **Level 3** - Retrieves current directory path.

- [x] **sleep**: **Level 2** - Basic functionality.

- [x] **true**: **Level 5** - POSIX compliant.

- [x] **tty**: **Level 5** - POSIX compliant. Supports `-s` flag.

- [x] **uname**: **Level 1** - Basic system name output only.

- [x] **yes**: **Level 2** - Basic functionality (High-performance buffer implementation).
