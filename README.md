# exercism

my solutions to [exercism.io](https://exercism.io) problems

### filters

I've defined some custom git filters<sup>[see gitattributes(5)](http://web.mit.edu/git/www/gitattributes.html)</sup> to remove the irrelevant part of each problem's README.
Here they are in case you're interested.

`.gitattributes`

```ini
cpp/*/README.md filter=cpp
```

`.git/config`

```ini
[filter "cpp"]
  clean = "sed -n '/##.*$/q;p'"
```