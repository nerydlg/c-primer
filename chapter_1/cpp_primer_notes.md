# C++ Primer Notes
## chapter 1 

### Functions 
<return type> <name> ([args1, arg2, ...])
{
    <body...>
    <return statement>
}

example: 
int main()
{
    return 0;
}

how to compile:
In unix system asumming our file is called prog1.cc we can execute 
```
$ cc prog1.cc
```

for linux we will use
```
g++ prog1.cpp
```

The result value is stored in a system-dependant manner on unix
```
$ echo $?
```
In windows
```
$echo %ERRORLEVEL%
```
### While
Same as Java

### For 
Same as Java

### If
Same as Java

### Variables Types

|     Variable Name     |      Value     | 
|-----------------------|----------------|
| bool                  | true, false    |
| char                  | character 8 bit|
| wchar                 | L'x' 16bit     |
| char16\_t             | unicode char 16bit |
| char32\_t             | unicode char 32bit |
| short                 | 16 bit integer |
| int                   | 16 bit integer |
| long                  | 32 bit integer |
| long long             | 64 bit integer |
| float                 | floating point 6 significant digits|
| double                | floating point 10 significant digits|
| long double           | floating point 10 significant digits|


