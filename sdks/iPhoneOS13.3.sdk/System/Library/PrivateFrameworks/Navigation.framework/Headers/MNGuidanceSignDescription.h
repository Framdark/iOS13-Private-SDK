//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOJunction, NSArray, NSDictionary, NSString, NSUUID;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding>
{
    int _shieldID;
    int _composedGuidanceEventIndex;
    NSUUID *_uniqueID;
    NSArray *_titles;
    NSArray *_details;
    GEOJunction *_junction;
    NSString *_shieldText;
    NSString *_shieldStringID;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int composedGuidanceEventIndex; // @synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex;
@property(readonly, nonatomic) long long distanceDetailLevel; // @synthesize distanceDetailLevel=_distanceDetailLevel;
@property(readonly, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;
@property(readonly, nonatomic) NSString *shieldStringID; // @synthesize shieldStringID=_shieldStringID;
@property(readonly, nonatomic) int shieldID; // @synthesize shieldID=_shieldID;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) GEOJunction *junction; // @synthesize junction=_junction;
@property(readonly, nonatomic) NSArray *details; // @synthesize details=_details;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10;

@end
