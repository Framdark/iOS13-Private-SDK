//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulasForUndo : NSObject
{
    struct unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::__1::hash<TSCESubFormulaOwnerIndex>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, std::__1::allocator<std::__1::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> _formulasForOwnerKind;
    struct unordered_map<TSCECellRef, NSString *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, NSString *>>> _formulaStringsForCellRefs;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)formulaStringAtCellRef:(const struct TSCECellRef )arg1;
- (void)addFormulaString:(id)arg1 atCellRef:(const struct TSCECellRef )arg2;
- (void)saveToArchive:(struct FormulasForUndoArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormulasForUndoArchive )arg1;
- (id)description;
- (void)foreachFormulaInOwnerKind:(unsigned short)arg1 performBlock:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)countForOwnerKind:(unsigned short)arg1;
- (id)subsetForOwnerKind:(unsigned short)arg1;
- (vector_8b45bc7e)allOwnerKinds;
- (unordered_set_c6a929bd)ownerUIDsForOwnerKind:(unsigned short)arg1;
- (BOOL)isEmpty;
- (NSUInteger)count;
- (void)addFormula:(struct TSCEFormula )arg1 atCellRef:(const struct TSCECellRef )arg2 forOwnerKind:(unsigned short)arg3;

@end

