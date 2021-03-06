//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject
{
    NSString *_contents;
    CPRMTableCell *_nextCellInColumn;
    CPRMTableCell *_nextCellInRow;
    CPRMTable *_table;
    CGPDFNode _tableCellNode;
}

@property CGPDFNode tableCellNode; // @synthesize tableCellNode=_tableCellNode;
@property CPRMTable *table; // @synthesize table=_table;
@property(retain) CPRMTableCell *nextCellInRow; // @synthesize nextCellInRow=_nextCellInRow;
@property(retain) CPRMTableCell *nextCellInColumn; // @synthesize nextCellInColumn=_nextCellInColumn;
- (CGColor )backgroundColor;
- (NSUInteger)column;
- (NSUInteger)row;
- (id)contents;
- (CGRect)bounds;
@property(readonly) CGPDFPage page; // @dynamic page;
- (void)dealloc;

@end

