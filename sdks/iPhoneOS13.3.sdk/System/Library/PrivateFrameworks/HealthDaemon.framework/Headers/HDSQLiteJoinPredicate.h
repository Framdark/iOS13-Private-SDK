//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteTruePredicate.h>


@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying>
{
    NSSet *_joinClauses;
}

+ (id)predicateWithJoinClauses:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *joinClauses; // @synthesize joinClauses=_joinClauses;
// - (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end

