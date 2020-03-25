//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingProtocol-Protocol.h>

@class HMSettingValue, NSArray, NSString;
@protocol HMDSettingConstraintProtocol;

@protocol HMDSettingOwnerProtocol <HMDSettingProtocol>
@property(copy) NSString *keyPath;
@property(readonly, copy) HMSettingValue *internalValue;
@property(readonly) NSArray *constraints;
- (BOOL)updateWithSettingValue:(HMSettingValue *)arg1;
- (void)addConstraint:(id <HMDSettingConstraintProtocol>)arg1;
@end
