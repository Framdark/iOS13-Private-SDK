//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

__attribute__((visibility("hidden")))
@interface EMRowMapper : CMMapper
{
    EDRowBlock *mRowBlock;
    struct EDRowInfo mRowInfo;
    double columnGrid;
    NSUInteger columnCount;
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(NSUInteger)arg2 height:(double)arg3;
// - (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(NSUInteger)arg3 lastColumn:(NSUInteger)arg4;
- (BOOL)isColumnHidden:(NSUInteger)arg1;
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo )arg2 parent:(id)arg3;
- (void)insertEmptyCellAt:(id)arg1 withColSpan:(NSUInteger)arg2 height:(double)arg3;
- (BOOL)isMergedCell:(struct EDCellHeader )arg1;
- (struct EDCellHeader )cellWithColumnNumber:(NSUInteger)arg1;

@end

