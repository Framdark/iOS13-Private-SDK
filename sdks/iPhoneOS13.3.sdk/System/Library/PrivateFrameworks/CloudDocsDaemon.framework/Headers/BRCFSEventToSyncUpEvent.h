//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCFSEventToSyncUpEvent : BRCEventMetric
{
    BOOL _isPackage;
    unsigned int _genID;
    NSUInteger _fileID;
    BRCItemID *_itemID;
    NSUInteger _mtime;
    NSUInteger _contentSize;
    NSUInteger _syncUpBatchSize;
}

@property(nonatomic) NSUInteger syncUpBatchSize; // @synthesize syncUpBatchSize=_syncUpBatchSize;
@property(nonatomic) BOOL isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) NSUInteger contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) NSUInteger mtime; // @synthesize mtime=_mtime;
@property(retain, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned int genID; // @synthesize genID=_genID;
@property(nonatomic) NSUInteger fileID; // @synthesize fileID=_fileID;
// - (void).cxx_destruct;
- (id)subDescription;
- (id)additionalPayload;

@end

