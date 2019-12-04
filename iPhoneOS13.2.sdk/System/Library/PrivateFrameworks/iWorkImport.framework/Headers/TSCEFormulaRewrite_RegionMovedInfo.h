//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo, TSCEFormulaRewrite_Uids;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject
{
    TSCEFormulaRewrite_RegionInfo *_srcRegion;
    TSCEFormulaRewrite_RegionInfo *_dstRegion;
    TSCEFormulaRewrite_RegionInfo *_originalSrcRegion;
    UUIDData_5fbc143e _finalDstTableUID;
    UUIDMap_b66c2694 _srcUidForDstUid;
    UUIDMap_b66c2694 _dstUidForSrcUid;
    _Bool _spanningRows;
    _Bool _spanningColumns;
    unsigned int _finalTopRowIndex;
}

@property(nonatomic) unsigned int finalTopRowIndex; // @synthesize finalTopRowIndex=_finalTopRowIndex;
@property(nonatomic) _Bool spanningColumns; // @synthesize spanningColumns=_spanningColumns;
@property(nonatomic) _Bool spanningRows; // @synthesize spanningRows=_spanningRows;
@property(readonly, nonatomic) const UUIDMap_b66c2694 *dstUidForSrcUid; // @synthesize dstUidForSrcUid=_dstUidForSrcUid;
@property(readonly, nonatomic) const UUIDMap_b66c2694 *srcUidForDstUid; // @synthesize srcUidForDstUid=_srcUidForDstUid;
@property(nonatomic) UUIDData_5fbc143e finalDstTableUID; // @synthesize finalDstTableUID=_finalDstTableUID;
@property(retain, nonatomic) TSCEFormulaRewrite_RegionInfo *originalSrcRegion; // @synthesize originalSrcRegion=_originalSrcRegion;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion; // @synthesize dstRegion=_dstRegion;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion; // @synthesize srcRegion=_srcRegion;
- (id).cxx_construct;
-     // Error parsing type: v24@0:8^{RegionMovedInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{RegionInfoArchive}^{RegionInfoArchive}^{RegionInfoArchive}^{UUID}BB}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{RegionMovedInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{RegionInfoArchive}^{RegionInfoArchive}^{RegionInfoArchive}^{UUID}BB}16, name: initFromMessage:
- (UUIDData_5fbc143e)srcUidForDstUid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)dstUidForSrcUid:(const UUIDData_5fbc143e *)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForSrcTable:(id)arg1 srcUidResolver:(id)arg2 dstTable:(id)arg3 dstUidResolver:(id)arg4;
- (void)loadIndexesFromRegions;
- (_Bool)isForDstTable:(const UUIDData_5fbc143e *)arg1;
- (_Bool)isForSrcTable:(const UUIDData_5fbc143e *)arg1;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcColumnUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property(readonly, nonatomic) UUIDData_5fbc143e originalSrcCondStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e dstCondStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e srcCondStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e originalSrcTableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e dstTableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e srcTableUID;
- (id)description;
- (id)initWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_d701734b *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_d701734b *)arg4;

@end
