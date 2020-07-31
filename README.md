# quickignore

Quickly generate `.gitignore` files for the chosen languages.

# Features
- Over 500 templates included
- Ability to combine multiple templates together

# Example
```sh
$ quickignore --help
Usage: quickignore [options...] -t <languages>
-h, --help This help text
-l, --list List languages with available templates
-t, --template Generate .gitignore template for specified languages
-o, --output-file Specify output file (default .gitignore)
```

To generate a .gitignore file in the current directory for a C and Java project simply run
```sh
$ quickignore -t c java
```

Sample output
```sh
Output file name: .gitignore
Proceed? [y/n]: y
Generating template for languages:
c ... done
java ... done
quickignore: completed
```
