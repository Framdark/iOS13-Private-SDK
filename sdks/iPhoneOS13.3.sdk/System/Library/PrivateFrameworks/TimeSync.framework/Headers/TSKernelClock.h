//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSClock.h>

@class __TSKernelClockNotification;

@interface TSKernelClock : TSClock
{
    unsigned int _service;
    unsigned int _connection;
    struct IONotificationPort _notificationPort;
    unsigned int _interestNotification;
    BOOL _serviceIsAlive;
    __TSKernelClockNotification *_clockForNotification;
}

+ (id)clockNameForClockIdentifier:(NSUInteger)arg1;
+ (id)diagnosticInfoForClockIdentifier:(NSUInteger)arg1;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (unsigned int)serviceForClockIdentifier:(NSUInteger)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg1;
+ (id)availableKernelClockIdentifiers;
- (id)diagnosticDescriptionWithIndent:(id)arg1;
- (void)dealloc;
- (id)clockName;
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void )arg2;
- (BOOL)deregisterAsyncCallback;
- (BOOL)registerAsyncCallback;
- (void)_handleNotification:(unsigned int)arg1 withArgs:(NSUInteger )arg2 ofCount:(unsigned int)arg3;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(NSUInteger)arg2 andArg2:(NSUInteger)arg3;
@property(readonly, nonatomic) BOOL serviceIsAlive; // @dynamic serviceIsAlive;
@property(readonly, nonatomic) unsigned int connection; // @dynamic connection;
@property(readonly, nonatomic) unsigned int service; // @dynamic service;
- (BOOL)getRateRatioNumerator:(NSUInteger )arg1 denominator:(NSUInteger )arg2 machAnchor:(NSUInteger )arg3 andDomainAnchor:(NSUInteger )arg4 withError:(id )arg5;
- (double)hostRateRatio;
- (int)_lockState;
- (NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg1;
- (NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg1;
- (BOOL)convertFromDomainTime:(NSUInteger )arg1 toMachAbsoluteTime:(NSUInteger )arg2 withCount:(unsigned int)arg3;
- (BOOL)convertFromMachAbsoluteTime:(NSUInteger )arg1 toDomainTime:(NSUInteger )arg2 withCount:(unsigned int)arg3;
- (NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg1 withFlags:(unsigned int )arg2;
- (NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg1 withFlags:(unsigned int )arg2;
- (id)initWithClockIdentifier:(NSUInteger)arg1;

@end
