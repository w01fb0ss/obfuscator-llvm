#ifndef __UTILS_OBF__
#define __UTILS_OBF__

#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Transforms/Utils/Local.h" // For DemoteRegToStack and DemotePHIToStack
#include <stdio.h>

namespace llvm {
void fixStack(Function *f);
llvm::StringRef readAnnotate(llvm::Function* f, llvm::StringRef attr);
bool toObfuscate(bool flag, Function *f, std::string attribute);
} // namespace llvm

#endif
