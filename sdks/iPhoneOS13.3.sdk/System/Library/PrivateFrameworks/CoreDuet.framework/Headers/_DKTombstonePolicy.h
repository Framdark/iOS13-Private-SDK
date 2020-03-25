//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject
{
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
}

+ (id)defaultPolicy;
@property(retain, nonatomic) NSArray *propertiesToFetchForTombstones; // @synthesize propertiesToFetchForTombstones=_propertiesToFetchForTombstones;
@property(retain, nonatomic) NSPredicate *eventPredicateForEventsRequiredToBeTombstoned; // @synthesize eventPredicateForEventsRequiredToBeTombstoned=_eventPredicateForEventsRequiredToBeTombstoned;
@property(retain, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned; // @synthesize predicateForEventsRequiredToBeTombstoned=_predicateForEventsRequiredToBeTombstoned;
@property(retain, nonatomic) NSArray *requirements; // @synthesize requirements=_requirements;
// - (void).cxx_destruct;
- (id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id )arg2;
- (id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id )arg2;
- (id)initWithRequirements:(id)arg1;
- (id)init;

@end
