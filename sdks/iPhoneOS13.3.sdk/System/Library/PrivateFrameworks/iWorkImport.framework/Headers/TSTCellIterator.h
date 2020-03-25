//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellIterating-Protocol.h>

@class NSMutableIndexSet, TSTCell, TSTCellRegion, TSTMutableCellIteratorData, TSTTableInfo, TSTTableModel;
@protocol TSTCellRegionIterating, TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating;

__attribute__((visibility("hidden")))
@interface TSTCellIterator : NSObject <TSTCellIterating>
{
    BOOL _returnCellContents;
    BOOL _returnEmptyCells;
    BOOL _returnOneEmptyCell;
    BOOL _terminateRegionIterator;
    BOOL _returnOnlyFormulas;
    unsigned int _rowForColumnIndexesWithMerges;
    TSTTableInfo *_tableInfo;
    TSTTableModel *_tableModel;
    TSTCellRegion *_region;
    TSTCell *_cell;
    TSTMutableCellIteratorData *_cellData;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _contentIterator;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _strokeIterator;
    id <TSTCellRegionIterating> _regionIterator;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _dataStoreIterator;
    NSMutableIndexSet *_columnIndexesWithMerges;
}

@property(retain, nonatomic) NSMutableIndexSet *columnIndexesWithMerges; // @synthesize columnIndexesWithMerges=_columnIndexesWithMerges;
@property(nonatomic) unsigned int rowForColumnIndexesWithMerges; // @synthesize rowForColumnIndexesWithMerges=_rowForColumnIndexesWithMerges;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> dataStoreIterator; // @synthesize dataStoreIterator=_dataStoreIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating> regionIterator; // @synthesize regionIterator=_regionIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> strokeIterator; // @synthesize strokeIterator=_strokeIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> contentIterator; // @synthesize contentIterator=_contentIterator;
@property(nonatomic) BOOL returnOnlyFormulas; // @synthesize returnOnlyFormulas=_returnOnlyFormulas;
@property(nonatomic) BOOL terminateRegionIterator; // @synthesize terminateRegionIterator=_terminateRegionIterator;
@property(nonatomic) BOOL returnOneEmptyCell; // @synthesize returnOneEmptyCell=_returnOneEmptyCell;
@property(nonatomic) BOOL returnEmptyCells; // @synthesize returnEmptyCells=_returnEmptyCells;
@property(retain, nonatomic) TSTMutableCellIteratorData *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(readonly, nonatomic) BOOL returnCellContents; // @synthesize returnCellContents=_returnCellContents;
@property(readonly, retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
// - (void).cxx_destruct;
- (void)p_updateDataForCellID:(struct TSUCellCoord)arg1;
- (void)p_updateDataForMergeAtCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)p_getNextCellID;
- (void)terminate;
- (BOOL)getNextCellData:(id )arg1;
- (id)nextCellData;
- (void)iterateCellsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4;
- (id)initWithTableInfo:(id)arg1 range:(struct TSUCellRect)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4 clampingRange:(struct TSUCellRect)arg5;
- (id)initWithTableInfo:(id)arg1 tableModel:(id)arg2 region:(id)arg3 flags:(NSUInteger)arg4 searchFlags:(NSUInteger)arg5 clampingRange:(struct TSUCellRect)arg6;

@end

