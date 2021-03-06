//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

@class NSIndexSet, NSMutableIndexSet, TSTTableTileGroup;

__attribute__((visibility("hidden")))
@interface TSTTableTileStorage : TSPContainedObject
{
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup *_tileGroups[16];
    BOOL _upgradeRepairedTiles;
}

+ (id)_sharedQueue;
+ (unsigned int)tileSize;
@property(readonly, nonatomic) BOOL upgradeRepairedTiles; // @synthesize upgradeRepairedTiles=_upgradeRepairedTiles;
// - (void).cxx_destruct;
- (void)prepareToApplyConcurrentCellMap:(id)arg1;
- (multimap_0345fd13)makeStorageMap;
- (void)reset;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 withDataStore:(id)arg2 result:(id )arg3;
- (BOOL)auditRowInfoCellCountsReturningResult:(id )arg1;
@property(readonly, nonatomic) BOOL needToUpgradeCellStorage;
- (void)pruneTileForRowIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property(readonly, nonatomic) NSIndexSet *populatedRows;
@property(readonly, nonatomic) NSIndexSet *populatedTiles;
- (void)moveColumnIndexRange:(_NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (id)columnCellCountsOfRowsInRange:(_NSRange)arg1;
- (void)moveRowIndexRange:(_NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)arg1 outTileRange:(_NSRange )arg2;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)arg1 outTileRange:(_NSRange )arg2;
- (id)tileForWritingAtRowIndex:(unsigned int)arg1 outTileRange:(_NSRange )arg2;
- (id)rowInfoAtIndex:(unsigned int)arg1;
- (void)enumerateRowByRowInRange:(_NSRange)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateRowsInRange:(_NSRange)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateRowsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateTilesConcurrentlyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_spliceRows:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_yankRowsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (id)_yankRowRange:(_NSRange)arg1;
- (id)_yankRowAtIndex:(unsigned int)arg1;
- (void)_removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsDownAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsUpAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_clearContentAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_enumerateTiles:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateGroups:(id /* CDUnknownBlockType */)arg1;
- (void)_removeTileForID:(NSUInteger)arg1;
- (id)_createTileWithID:(NSUInteger)arg1;
- (void)_setTile:(id)arg1 forID:(NSUInteger)arg2;
- (id)_tileForID:(NSUInteger)arg1 createIfMissing:(BOOL)arg2;
- (id)_groupForTileID:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger nextTileID;
- (void)saveToStorageArchive:(struct TileStorage )arg1 treeArchive:(struct TableRBTree )arg2 archiver:(id)arg3;
- (void)_upgradeFromTileIDMap:(vector_ceceab0b )arg1 referenceMap:(unordered_map_52392278 )arg2;
- (id)initWithStorageArchive:(const struct TileStorage )arg1 treeArchive:(const struct TableRBTree )arg2 nextTileID:(NSUInteger)arg3 unarchiver:(id)arg4 owner:(id)arg5;
- (id)initWithOwner:(id)arg1;

@end

