### Usage
Using dlopen to load load dynamic library c++ in Ubuntu


### Building dynamic library


Assumming that you are in **/dlopen-dynamically-load-class-cpp-ubuntu** directory.


````
make
````

### Testing dynamic library

````
cd test
make
````

* Running the executable:

````
./dlopen
````

* Result should be: 

```
Making foo [foo.cc FooFactory::getInstance()]
Foo created [foo.cc - Foo::Foo()]
Foo tested [Foo.cc - Foo::test()]
Foo destroyed [foo.cc - Foo::~Foo()]
```
 
