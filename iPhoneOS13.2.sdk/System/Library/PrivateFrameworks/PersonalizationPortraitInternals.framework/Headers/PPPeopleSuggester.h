//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPPeopleSuggester : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
- (void)_sweepCache;
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)arg1;
- (id)rankedContactIdentifiers;
- (id)init;

@end
