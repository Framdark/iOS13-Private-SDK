//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/CSSearchableIndexDelegate-Protocol.h>

@interface IMDSpotlightIndexDelegate : NSObject <CSSearchableIndexDelegate>
{
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* CDUnknownBlockType */)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg2;

@end

