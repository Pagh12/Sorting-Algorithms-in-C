# Sorting Algorithms in C

This repository contains implementations of classic sorting algorithms written in C.  
The goal is to create clean, educational examples of each algorithm, along with simple test drivers.

⚠️ **Note:** This project is still under construction. More algorithms, tests, and benchmarks will be added over time.

---

## 📂 Project Structure

```
SortingInC/
├── include/          # Header files (public API, e.g. sorts.h)
├── src/Algorithms/   # Sorting algorithm implementations
│   ├── insertion_sort.c
│   └── merge_sort.c
├── test/             # Test programs (with main.c)
├── examples/         # Example usage programs
├── Makefile          # Build instructions
└── README.md
```

---

## 🔨 Building with Make

This project uses a simple `Makefile` to build the programs.

### Build the default test runner

```bash
make
```

This compiles the sorting library and the test program (`test/main.c`).  
The output is an executable named:

```
./test_runner
```

Run it with:

```bash
./test_runner
```

---

### Build the example program

If you also want to build the example in `examples/main.c`, run:

```bash
make example
./example
```

---

### Clean build files

To remove object files and executables:

```bash
make clean
```

---

## ▶️ Usage

After building, you can run either the **test runner** or the **example** program.  
Both will print the arrays before and after sorting.

Example output:

```
Original (insertion): 5 3 8 4 2
Sorted   (insertion): 2 3 4 5 8

Original (merge):     7 1 9 3 3 2
Sorted   (merge):     1 2 3 3 7 9
```

---

## 🚧 Roadmap

- [x] Insertion Sort  
- [x] Merge Sort  
- [ ] Selection Sort  
- [ ] Quick Sort  
- [ ] Heap Sort  
- [ ] Counting Sort / Radix Sort  
- [ ] Benchmarks and performance comparisons  
- [ ] Unit tests with `ctest`

---

## 📜 License

This project is open source. You are free to use and adapt the code for learning and practice.
