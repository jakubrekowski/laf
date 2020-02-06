# laf
## syntax
### laf v0.3
#### How to correctly define a function?
YES:
```[cpp]
void sth() {
    // code ...
}
```

NO:
```[cpp]
void sth()
{
    // code ...
}
```

#### How to enable the functions defining the laf?
```[cpp]
laf::define_func;
```

#### other functionality
- laf panel (listing all functions, files and starting a laf console) - ```laf_console::panel();```
- laf info (print all info, for example about laf version) - ```laf_console::info();```
- laf console execute (open laf console) - ```laf_console::execute(func_id);```

#### Adinional info
In this version of laf (v0.3), the library incorrectly detects functions in namespace and classes. We are working on adding this functionality.
