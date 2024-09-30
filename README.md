# ColorManager

This is a simple C++ program for managing a collection or palette of RGB colors.

Invoke the program by running **Manager**, followed by a list of the color values, such as:

```
./Manager 000 afC940 876 5104 FEFED 9964Ba 00G000
```

In this case, the program should recognize the only valid colors provided were:
```
#000
#afC940
#876
#9964Ba
```

The program can be compiled using the command:
```
g++ main.cpp --std=c++17 -o Manager
```

Or to compile and run it with the above test data, invoke `sh test_runner.sh`

## Getting Started

If you don't already have the `cpp-container built, do so with the command:

```
docker build -t cpp-container .
```

Once built, run the image:

```
docker run -it cpp-container
```

...or run it interactively in a shell:

```
docker run -it cpp-container sh
```

...or run it with a volume mounted to the current source code:

```
docker run -v "$(pwd)":/usr/src -it cpp-container
```

