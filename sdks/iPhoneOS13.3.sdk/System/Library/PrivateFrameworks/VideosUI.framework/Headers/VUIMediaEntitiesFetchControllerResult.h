//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject
{
    long long _fetchReason;
    NSArray *_fetchResponses;
    NSArray *_fetchResponseChanges;
}

@property(copy, nonatomic) NSArray *fetchResponseChanges; // @synthesize fetchResponseChanges=_fetchResponseChanges;
@property(copy, nonatomic) NSArray *fetchResponses; // @synthesize fetchResponses=_fetchResponses;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2;
- (id)init;

@end

