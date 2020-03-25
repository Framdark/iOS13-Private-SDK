//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class NSArray, NSMutableArray, NSNumber, NSUUID;

@interface HAPBLEServiceCache : HMFObject <NSSecureCoding>
{
    NSUUID *_serviceUUID;
    NSNumber *_serviceInstanceId;
    NSUInteger _serviceInstanceOrder;
    NSUInteger _serviceProperties;
    NSArray *_linkedServices;
    NSMutableArray *_cachedCharacteristics;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *cachedCharacteristics; // @synthesize cachedCharacteristics=_cachedCharacteristics;
@property(retain, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(nonatomic) NSUInteger serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(nonatomic) NSUInteger serviceInstanceOrder; // @synthesize serviceInstanceOrder=_serviceInstanceOrder;
@property(readonly, nonatomic) NSNumber *serviceInstanceId; // @synthesize serviceInstanceId=_serviceInstanceId;
@property(readonly, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithCharacteristic:(id)arg1;
- (void)updateWithService:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithServiceUUID:(id)arg1 instanceId:(id)arg2 instanceOrder:(NSUInteger)arg3 serviceProperties:(NSUInteger)arg4 linkedServices:(id)arg5;

@end
