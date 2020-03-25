//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDatabase;

@interface WFTriggerManager : NSObject
{
    WFDatabase *_database;
}

@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (id)configuredTriggerWithID:(id)arg1;
- (id)allConfiguredTriggers;
- (void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)initWithDatabase:(id)arg1;

@end

