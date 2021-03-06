//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSNumber, NSString;

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSNumber *_min;
    NSNumber *_max;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
// - (void).cxx_destruct;
- (id)metricData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(NSUInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_evaluateNewValue:(id)arg1;
- (BOOL)_isValueInRange:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (id)emptyModelObject;
- (id)createPayload;
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

@end

