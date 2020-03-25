//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IMGroupBlacklistManager : NSObject
{
    NSDate *_lastModifiedDate;
}

+ (id)sharedInstance;
+ (id)groupsBlacklistFilename;
@property(retain) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
// - (void).cxx_destruct;
- (void)reloadIfNeeded;
- (void)_updateLastModifiedDate:(id)arg1;
- (void)loadFromFile:(id)arg1;
- (void)loadData;
- (void)save;
- (BOOL)isFeatureDisabled;
- (BOOL)isGroupInBlacklist:(id)arg1;
- (void)blacklistGroupId:(id)arg1;
- (BOOL)hasFileChanged;
- (id)initFromFile:(id)arg1;
- (id)init;

@end
