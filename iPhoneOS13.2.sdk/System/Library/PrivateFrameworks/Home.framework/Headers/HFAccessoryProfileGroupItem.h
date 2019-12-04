//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemGroupItem.h>

#import <Home/HFAccessoryProfileVendor-Protocol.h>


@class NSNumber, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying>
{
    NSSet *_profiles;
    NSNumber *_groupIdentifier;
    id <HFCharacteristicValueSource> _valueSource;
}

@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, copy, nonatomic) NSNumber *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) NSSet *profiles; // @synthesize profiles=_profiles;
- (id)copyWithValueSource:(id)arg1;
- (id)_buildProfileItems;
@property(readonly, nonatomic) NSSet *services;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 valueSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
