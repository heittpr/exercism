# exercism

my solutions to [exercism.io](https://exercism.io) problems

### filters

I've defined some custom git filters (see [gitattributes(5)](https://mirrors.edge.kernel.org/pub/software/scm/git/docs/gitattributes.html#_tt_filter_tt)) to remove the irrelevant part of each problem's README. Here they are in case you're interested.

`.git/config`

```ini
[filter "cpp"]
  clean = "sed -n '/##.*$/q;p'"
```

`.gitattributes`

```ini
cpp/*/README.md filter=cpp
```

