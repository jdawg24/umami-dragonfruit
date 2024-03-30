// Copyright (c) 2024 Bitcoin Developers
// Copyright (c) 2024 Sugarchain Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "logprintf.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

class SugarchainModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<sugarchain::LogPrintfCheck>("sugarchain-unterminated-logprintf");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<SugarchainModule>
    X("sugarchain-module", "Adds sugarchain checks.");

volatile int SugarchainModuleAnchorSource = 0;
