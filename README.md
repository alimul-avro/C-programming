# C Programming Setup on Windows

This guide will help you set up a C programming environment on Windows, including installing Chocolatey, GCC (MinGW), and compiling your first C program.

## 1. Install Chocolatey (Windows Package Manager)

1. Open **PowerShell** as Administrator (right-click and select "Run as administrator").
2. Run the following command:

```
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

3. Close and reopen PowerShell after installation.

## 2. Install GCC (MinGW) and Make

1. In a new **PowerShell** window (can be normal user), run:

```
choco install mingw make -y
```

2. After installation, add GCC to your system PATH:

   - Open **System Properties** > **Advanced** > **Environment Variables**.
   - Under **System variables**, find and select `Path`, then click **Edit**.
   - Add the following (adjust if your install location is different):
     - `C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin`
   - Click **OK** to save.

3. Close and reopen PowerShell to reload the PATH.

4. Verify installation:

```
gcc --version
make --version
```

## 3. Build and Run Your First C Program

1. Save your C code in a file, e.g., `hello.c` (already provided in this folder).
2. Open PowerShell in this folder (Shift+Right Click > "Open PowerShell window here").
3. Compile the program:

```
gcc hello.c -o hello.exe
```

4. Run the program:

```
./hello.exe
```

You should see:

```
Hello, World!
```

## 4. (Optional) Using Makefiles

If you have a `Makefile`, you can build your project with:

```
make
```

---

**You're now ready to start programming in C on Windows!**
