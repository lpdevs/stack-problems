### Usage
For building dynamic library c++ in Ubuntu


### Building dynamic library


Assumming that you are in **/build-dynamic-library-cpp-ubuntu** directory.


```
make
```

### Testing dynamic library

```
cd test
make
```

  * Exporting path of the shared library to the enviroment variable

    ```
    export LD_LIBRARY_PATH=..:$LD_LIBRARY_PATH
    ```

  * Running the executable:

    ```
    ./prog
    ````

  * Result should be: Hello from dynamic library
 
