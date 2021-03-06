//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState : BRCPersistedState
{
    NSUInteger _nextItemRowID;
    NSUInteger _nextNotifRank;
    NSUInteger _nextPackageItemRank;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;
@property(nonatomic) NSUInteger nextPackageItemRank;
- (NSUInteger)allocatePackageItemRank;
@property(nonatomic) NSUInteger nextNotifRank;
- (NSUInteger)allocateNotifRank;
- (NSUInteger)allocateItemRowID;
@property(readonly, nonatomic) NSUInteger nextItemRowID;

@end

