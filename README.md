### Not ready for testing, working on stratum v2 / C++20 upgrades

https://en.bitcoin.it/wiki/BIP_0324 

https://github.com/rust-bitcoin/rust-bitcoin/tree/0.29.1 

https://github.com/stratum-mining/stratum

## Sugarchain Core 

# chain.h
file updates [d22825a] (https://github.com/sugarchain-project/umami/commit/d22825a648274b7c7ba3beb1caed4a5c8f45a63d)  
Original Concept [Payapoya] (https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/chain.h#L36)

# chainparams.cpp
file updates [commit bb8fab8] (https://github.com/sugarchain-project/umami/commit/bb8fab82b2eabd5608b192e0bed18c77c5365b02)
umami [3955f9c] (https://github.com/sugarchain-project/umami/blob/main/src/chainparams.cpp)
Original Concept [Payapoya] (https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/chainparams.cpp#L143-L170)

# pow.cpp
Original Concept [Payapoya] (https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/pow.cpp)

# timedata.h 
Original Concept [Payapoya] (https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/timedata.h#L23)

# Algo general 
[Summary of Difficulty Algorithms] (https://github.com/zawy12/difficulty-algorithms/issues/50)

Sugarchain Core integration/staging tree
=====================================

https://sugarchain.org

For immediately usable, previous release, binary version of the Sugarchain Core software, see
https://github.com/sugarchain-project/sugarchain/releases/tag/v0.16.3.36-payapoya - tested ubuntu 22.04

What is Sugarchain Core?
---------------------

Sugarchain Core connects to the Sugarchain peer-to-peer network to download and fully
validate blocks and transactions. Legacy wallet is no longer supported in this release. 

Further information about Sugarchain Core is available in the [doc folder](/doc).

License
-------

Sugarchain Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The https://github.com/sugarchain-core/gui repository is used exclusively for the
development of the GUI. Its master branch is identical in all monotree
repositories. Release branches and tags do not exist, so please do not fork
that repository unless it is for development reasons.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md)
and useful hints for developers can be found in [doc/developer-notes.md](doc/developer-notes.md).

Testing
-------

Testing and code review is the bottleneck for development.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`


### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
[Sugarchain Core's Transifex page](https://www.transifex.com/sugarchain/sugarchain/).

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.
