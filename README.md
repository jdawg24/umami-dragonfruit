### Not ready for testing, working on stratum v2 / C++20 upgrades

https://en.bitcoin.it/wiki/BIP_0324 

https://github.com/rust-bitcoin/rust-bitcoin/tree/0.29.1 

https://github.com/stratum-mining/stratum

## Sugarchain Core 

### chain.h
file updates [d22825a](https://github.com/sugarchain-project/umami/commit/d22825a648274b7c7ba3beb1caed4a5c8f45a63d)  
Original Concept [Payapoya](https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/chain.h#L36)

### chainparams.cpp
file updates [bb8fab8](https://github.com/sugarchain-project/umami/commit/bb8fab82b2eabd5608b192e0bed18c77c5365b02)

umami [3955f9c](https://github.com/sugarchain-project/umami/blob/main/src/chainparams.cpp)

Original Concept [Payapoya](https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/chainparams.cpp#L143-L170)

### pow.cpp
Original Concept [Payapoya](https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/pow.cpp)

### timedata.h 
Original Concept [Payapoya](https://github.com/sugarchain-project/sugarchain/blob/d2d13cacd9e7c2640a02e6392978a26df06f9eb8/src/timedata.h#L23)

### ports
umami [08fd1fc](https://github.com/sugarchain-project/umami/commit/08fd1fce9f8184936922e21aad569d2bc109622c)

### addressindex.h / spentindex.h 

umami [1a255aa](https://github.com/sugarchain-project/umami/commit/1a255aa8343a6629da95c826e6041bbb7a2b8c17)

### Algo general 
[Summary of Difficulty Algorithms](https://github.com/zawy12/difficulty-algorithms/issues/50)

### YesPowerSugar 

umami [0297777](https://github.com/sugarchain-project/umami/commit/02977772f85b627f0d50e4596fa2f17c2406709c)

DragonFruit [e137e77](https://github.com/jdawg24/umami-dragonfruit/commit/e137e77f3c6af87cde77ec0f8724642f0fea3e63)

### Sugarsheild 

umami [553dee7](https://github.com/sugarchain-project/umami/commit/553dee71f348ce968629b371db4599832db11532)

## Change Log (not exhaustive but core / more complex edits)

### /src/txdb --> /src/node/blockstorage

DragonFruit [543f8e5](https://github.com/sugarchain-project/umami/commit/543f8e5fa066d13efc9a380569125612b1de4b60) && [fa65111](https://github.com/bitcoin/bitcoin/commit/fa65111b99627289fd47dcfaa5197e0f09b8a50e#diff-114c2880ec1ff2c5293ac65ceda0637bf92c05745b74b58410585a549464a33f) && [1a255aa](https://github.com/sugarchain-project/umami/commit/1a255aa8343a6629da95c826e6041bbb7a2b8c17#diff-cafbe1353eff6084b73fd3b6c3dee603e0827348fdd2fe12dfad1e01003a84ed)

### /src/txmempool 

DragonFruit [61a286c](https://github.com/sugarchain-project/umami/commit/61a286ce364452b5c474dbe6d2083980099a94ce)

### /src/validation 

DragonFruit [58bdf7d](https://github.com/sugarchain-project/umami/commit/58bdf7d015b8f487715f80b526f65f8d0dd5c4f1)


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
